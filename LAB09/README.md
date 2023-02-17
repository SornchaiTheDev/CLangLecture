# Simple variables

```c
int number = 30;
char* name = "Takeshi";
```

Array
access by index

```c
int numbers[] = {1, 1, 2, 3, 5};
char* names[] = {"Chokun" , "Nong Nut" , "Saac"};
```

## Struct

store data like array but using key and value pairs

```c
struct Student {
  char firstName [30];
  char lastName [30];
  char id[11];
  double score;
}
```

```c
struct Book { 
  char title[100];
  char author[200];
  char isbn[14]; // international standard book number
  double price;
}
```

```c
struct Classroom {
  char building[20];
  int floor;
  int room_number;
  int capacity;
}
```

```c
struct Music {
  char name[40];
  long views;
}
```

## How to create A Structure ?

1.Defining a Structure

```c
struct [Structure Tag] {
  Member definition
};
```

2.Using a Structure

```c
struct [Structure Tag] var_name;
```

Using `typedef` to create a alias like Structure

```c
typedef struct {
  float price;
} Game;
```
