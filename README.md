# cpp_tutorial



## terminal setup
For me I am using fish shell in termux for now
so here is the steps
- make a function inside `~/.config/fish/functions`
- for me I named it `cr.fish` .
- after saving the code restart the `fish shell` or `open a new terminal` .
- than you can use the function 


### how you will use it
```bash
> cr basic_data_types.cpp

Compiling basic_data_types.cpp with g++...           
Compilation successful.

Running basic_data_types.exe...
82881
10.75
281.282
bdafabda7cc1bbc7969df7063b1
g
1
0

Execution time: 69 millisecond(s)
 ```


### fish shell function
``` fish
# Define variables for colors
set -g __COLOR_RESET (set_color normal)
set -g __COLOR_RED (set_color red)
set -g __COLOR_GREEN (set_color green)
set -g __COLOR_CYAN (set_color cyan)
set -g __COLOR_MAGENTA (set_color magenta)

function cr
    # Check if file exists
    if test -f $argv[1]
        # Auto detect compiler
        if type -q g++
            set compiler "g++"
        else
            echo "Error: Compiler not found"
            return 1
        end

        # Log starting time for compilation
        set start_compile_time (date +%s%N)

        # Compile the file
        echo -n "Compiling... "
        if $compiler $argv[1] -o output 2> log
            echo "$__COLOR_GREEN Successful"
            set success true
        else
            echo "$__COLOR_RED Error"
            cat log
            rm -f log
            return 1
        end

        # Log compilation time
        set end_compile_time (date +%s%N)
        set compile_time_ns (math $end_compile_time - $start_compile_time)
        set compile_time_ms (math $compile_time_ns / 1000000)
        set compile_time_s (math $compile_time_ms / 1000)
        echo -n $__COLOR_CYAN"Compilation Time: "
        if test $compile_time_s -gt 60
            echo "$compile_time_s seconds"
        else if test $compile_time_ms -gt 1000
            echo "$compile_time_s seconds"
        else
            echo "$compile_time_ms milliseconds"
        end

        # Add newline before execution log
        echo ""

        # Execute the binary
        echo -n $_COLOR_MAGENTA "Executing... "
        set start_time (date +%s%N)
        ./output
        set end_time (date +%s%N)
        set execution_time_ns (math $end_time - $start_time)
        set execution_time_ms (math $execution_time_ns / 1000000)
        set execution_time_s (math $execution_time_ms / 1000)

        # Log total execution time
        echo ""
        echo ""
        echo -n $__COLOR_CYAN"Total Execution Time: "
        if test $execution_time_s -gt 60
            echo "$execution_time_s seconds"
        else if test $execution_time_ms -gt 1000
            echo "$execution_time_s seconds"
        else
            echo "$execution_time_ms milliseconds"
        end

        # Cleanup
        rm -f output

        return 0
    else
        echo "Error: File not found"
        return 1
    end

    # Log total compilation time and execution time at the end with different color
    echo ""
    echo ""
    echo -n $__COLOR_MAGENTA"Total Compilation Time: "
    if test $compile_time_s -gt 60
        echo "$compile_time_s seconds"
    else if test $compile_time_ms -gt 1000
        echo "$compile_time_s seconds"
    else
        echo "$compile_time_ms milliseconds"
    end

    echo -n $__COLOR_MAGENTA"Total Execution Time: "
    if test $execution_time_s -gt 60
        echo "$execution_time_s seconds"
    else if test $execution_time_ms -gt 1000
        echo "$execution_time_s seconds"
    else
        echo "$execution_time_ms milliseconds"
    end
end
```
