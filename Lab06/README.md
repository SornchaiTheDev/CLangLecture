# Struct

```c
struct Person {   // Structure declaration
  char[30] name;
  int age;
}; 

int main() {
    struct Person Chokun = {'Chokun' , 19};
    return 0;
}
```

This is how to define struct or you can use `typedef` to define type for struct . So you don't need to call struct by `struct Person` all the time using

```c
typedef struct Person {
    char[30] name;
    int age;
} Person

int main() {
    Person Chokun = {'Chokun' , 19};
    return 0;
}
```
