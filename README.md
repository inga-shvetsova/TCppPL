# TC++PL
Self-assesment on exercise completion from the book *"The C++ Programming Language"* by [Bjarne Stroustrup](https://www.stroustrup.com/index.html)

> 
>
> ![A photograph of Bjarne.](../main/bjarne-stroustrup.jpg)
> 
> Image courtesy: [linkedin.com](https://www.linkedin.com/in/bjarnestroustrup)

# Compiling and executing a C++ program:
Using `g++` - GNU built-in command line compiler present in most Linux distributions.
```
  $ g++ your-source-file.cpp -o object-code.o
  $ ./object-code.o
```

If using `gcc` (Not reccomended):
```
  $ gcc -Wall your-source-file.cpp -lstdc++ -o object-code.o
  $ ./object-code.o
```
