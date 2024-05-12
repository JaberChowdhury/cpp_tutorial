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
cr bmi_calculator.cpp
Compiling bmi_calculator.cpp...
Compilation successful. Running bmi_calculator...
Type your weight in 'kg' unit : 10
Type your height in 'meter' unit : 20
Your bmi is 0.025⏎
 ```


### fish shell function
``` fish
function cr
    if test (count $argv) -eq 0
        echo "Usage: cr <cpp_file>"
        return 1
    end

    set cpp_file $argv[1]
    set output_file (basename $cpp_file .cpp)

    echo "Compiling $cpp_file..."
    if g++ -o $output_file $cpp_file
        echo "Compilation successful. Running $output_file..."                                                    ./$output_file                                   else
        echo "Compilation failed."
    end
end
```
