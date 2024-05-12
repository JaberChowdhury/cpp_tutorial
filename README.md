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
function cr
    if test (count $argv) -eq 0
        echo "Usage: cr <cpp_file> [compiler]"
        return 1
    end

    set cpp_file $argv[1]
    set output_file (basename $cpp_file .cpp).exe

    # Auto-detect compiler or use g++ if not specified
    if test (count $argv) -gt 1
        set compiler $argv[2]
    else
        if type clang++ >/dev/null 2>&1
            set compiler "clang++"
        else
            set compiler "g++"
        end
    end

    echo -e "\n\e[1;34mCompiling $cpp_file with $compiler...\e[0m"
    if $compiler -o $output_file $cpp_file 2>&1 | tee compilation.log
        echo -e "\n\e[1;32mCompilation successful.\e[0m"
        echo -e "\n\e[1;34mRunning $output_file...\e[0m"
        set start_time_ns (date +%s%N) # Record start time in nanoseconds
        if test (count $argv) -gt 2 && $argv[3] == "--verbose"
            ./$output_file | tee execution.log
        else
            ./$output_file
        end
        set end_time_ns (date +%s%N)   # Record end time in nanoseconds
        set elapsed_time_ns (expr \( $end_time_ns - $start_time_ns \)) # Calculate execution time in nanoseconds
        set elapsed_time_ms (expr \( $elapsed_time_ns / 1000000 \)) # Convert to milliseconds
        set elapsed_time_sec (expr \( $elapsed_time_ms / 1000 \)) # Convert to seconds
        set elapsed_time_min (expr \( $elapsed_time_sec / 60 \)) # Convert to minutes

        if test $elapsed_time_min -gt 0
            echo -e "\n\e[1;34mExecution time: $elapsed_time_min minute(s) and $elapsed_time_sec second(s)\e[0m" # Print execution time in blue
        else if test $elapsed_time_sec -gt 0
            echo -e "\n\e[1;34mExecution time: $elapsed_time_sec second(s) and $elapsed_time_ms millisecond(s)\e[0m" # Print execution time in blue
        else
            echo -e "\n\e[1;34mExecution time: $elapsed_time_ms millisecond(s)\e[0m" # Print execution time in blue
        end
        rm $output_file # Delete the binary file after execution
    else
        echo -e "\n\e[1;31mCompilation failed.\e[0m"
        return 1
    end
end
```
