<details>
  <summary>Fish Shell Function 1 (Recommended)</summary>
  <pre>
    <code>
    function cv
        if test (count $argv) -eq 0
            echo "Usage: cv <file.c or file.cpp>"
            return 1
        end

        set file $argv[1]

        if not test -f $file
            echo "File not found!"
            return 1
        end

        # Extract file extension
        set extension (string split -r '.' $file)[2]

        if test -z "$extension"
            echo "Invalid file. Please provide a file with a .c or .cpp extension."
            return 1
        end

        set extension (string lower $extension)

        set output "output_executable"

        # Check if file is .c or .cpp
        if test $extension = "c"
            set compiler gcc
        else if test $extension = "cpp"
            set compiler g++
        else
            echo "Invalid file extension. Please provide a .c or .cpp file."
            return 1
        end

        # Compile the file and measure compile time
        echo "Compiling $file..."
        set compile_start (date +%s%N)
        $compiler $file -o $output
        set compile_end (date +%s%N)
        set compile_time (math (math $compile_end - $compile_start) / 1000000000)
        echo "Compile time: $compile_time seconds"

        # Check if the file was compiled successfully
        if not test -x $output
            echo "Compilation failed!"
            return 1
        end

        # Run the executable and measure execution time and memory usage
        echo "Executing $output..."
        set exec_start (date +%s%N)

        # Measure execution time using the built-in time command
        time ./$output

        set exec_end (date +%s%N)
        set exec_time (math (math $exec_end - $exec_start) / 1000000000)
        echo "Execution time: $exec_time seconds"

        # Remove the output executable
        rm $output
    end
    </code>

  </pre>
</details>

<details>
  <summary>Fish Shell Function 2</summary>
  <pre>
    <code>
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
    </code>

  </pre>
</details>
