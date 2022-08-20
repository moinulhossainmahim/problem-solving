#include <stdio.h>
#include <stdlib.h>
int Q[3];
int front = 0;
int rear = 0;

void insert() {
  printf("1. Chocolate\n 2. Vanilla\n 3.Butter Scotch\n");
  int data;
  if (rear + 1 == 3) {
    printf("Queue is full\n");
  } else {
    printf("Enter item number: ");
    scanf("%d", &data);
    Q[rear++] = data;
  }
}

void delete () {
  if (front == 0 && rear == 0) {
    printf("Queue is empty\n");
  } else if (Q[front] == Q[front + 1] && Q[front] == Q[front + 2]) {
    front = rear = 0;
  } else if (Q[front] == Q[front + 1]) {
    front += 2;
  } else {
    front++;
  }
}

void display() {
  for (int j = front; j <= rear; j++) {
    if (Q[j] == 1) {
      printf("Chockolate\n");
    } else if (Q[j] == 2) {
      printf("Vanilla\n");
    } else if (Q[j] == 3) {
      printf("Butter Scoth\n");
    }
  }
}

int menu() {
  int option;
  printf("1.order\n");
  printf("2.Serve\n");
  printf("3.exit\n");
  scanf("%d", &option);
  return option;
}

int main() {
  int option;
  while (1) {
    option = menu();
    switch (option) {
    case 1:
      insert();
      printf("Order table\n");
      display();
      break;
    case 2:
      delete ();
      display();
      break;
    case 3:
      exit(0);
    }
  }
}
