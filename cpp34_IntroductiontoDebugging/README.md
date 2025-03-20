<img style="border-radius:10px;" title="a title" alt="Alt text" src="https://img.freepik.com/free-vector/illustration-virus-detection_53876-37692.jpg?t=st=1742487163~exp=1742490763~hmac=f91e58c27d64c5629e9326830eb791b63df2abce2df0573ab6e081d6b58ba507&w=1380">

<br/>

# Introduction to Debugging

Creating a tiny program using numbers and booleans, then adding some breakpoints so we can step through our code in a debugger.

> ## **Build Time and Run Time:**
>
> We can think of programming and software design as having two `"phases"` - `build time`, and `run time`.
>
> - Build time happens when we press the "build" button in our editor. It covers all the processes that are involved in compiling and packaging our software into a product, ready to send to users.
> - Run time is when when we, or our users, later run our software.
> - In the context of bugs and errors, an example of a build time issue is something that prevents our software from compiling at all. You may already have seen some of those - perhaps a missing semicolon, or some other misuse of syntax.
> - However, just because our code builds successfully, that doesn't mean it's correct. There may still be run-time errors. Run time errors are situations where our software will crash, or not do what we expected whenever someone is running the program.

# What is a Debugger?

A debugger is a tool used to inspect and modify the state of a running program.

### All debuggers tend to work in very similar ways. Their features include:

1. **Breakpoints:** Set points where the program's execution will pause, allowing us to examine the current state.
2. **Step Execution:** Move through the code line by line or breakpoint by breakpoint to observe our program state changes through time.
3. **Variable Inspection:** View and modify the values of variables at runtime.
4. **Conditional Debugging:** Set conditions under which the debugger will pause the program, useful for tracking down specific bugs.
