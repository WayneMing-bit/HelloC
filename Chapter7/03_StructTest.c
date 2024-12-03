/**
 * 结构体嵌套
 */

#include <string.h>

struct Name {
    char firstName[50];
    char lastName[50];
};

struct Student {
    int age;
    struct Name name;
    char gender;
} stu1;

typedef struct Node {
    int data;
    struct Node *next;
} LNode;


typedef struct BTNode {
    int data;
    struct BTNode *lchild;
    struct BTNode *rchild;
} BTNode;

int main() {
    strcpy(stu1.name.firstName, "Ming");
    strcpy(stu1.name.lastName, "Wayne");

    // or
    struct Name myName = {"Ming", "Wayne"};
    stu1.name = myName;

    // 单向链表
    LNode node1 = {.data = 1};
    LNode node2 = {.data = 2, .next = &node1};

    // 二叉树结构
    BTNode btNode1 = {.data = 1};
    BTNode btNode2 = {.data = 2, .lchild = &btNode1};
    BTNode btNode3 = {.data = 3, .lchild = &btNode2, .rchild = &btNode1};

    int btNode3Data = btNode1.lchild->lchild->data;

    return 0;
}