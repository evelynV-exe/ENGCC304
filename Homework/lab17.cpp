#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// โครงสร้างข้อมูลหนังสือ
typedef struct {
    int id;
    char title[100];
    char author[100];
    int year;
} Book;

// ฟังก์ชันสำหรับเพิ่มหนังสือ
void addBook(Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Library is full. Cannot add more books.\n");
        return;
    }

    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar(); // เคลียร์ newline จาก buffer

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0'; // ลบ newline

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);

    (*count)++;
    printf("Book added successfully.\n");
}

// ฟังก์ชันสำหรับค้นหาหนังสือตามชื่อ
void searchBook(Book books[], int count, char title[]) {
    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("\nBook Found:\n");
            printf("ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Book not found.\n");
    }
}

// ฟังก์ชันสำหรับแสดงรายชื่อหนังสือทั้งหมด
void displayBooks(Book books[], int count) {
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    printf("\nList of Books:\n");
    for (int i = 0; i < count; i++) {
        printf("ID: %d | Title: %s | Author: %s | Year: %d\n",
               books[i].id, books[i].title, books[i].author, books[i].year);
    }
}

// ฟังก์ชันหลัก
int main() {
    Book books[MAX_BOOKS];
    int count = 0;
    int choice;
    char searchTitle[100];

    do {
        printf("\nLibrary Menu:\n");
        printf("1. Add New Book\n");
        printf("2. Search Book by Title\n");
        printf("3. Display All Books\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // เคลียร์ newline

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                printf("Enter title to search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = '\0';
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}
