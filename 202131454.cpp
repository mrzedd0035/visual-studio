#include <iostream>
#include <string>
using namespace std;

struct node {
public:
    string name;
    int id = 0;
    float allowance = 0.0f;
    node* p_next = nullptr;
};

node* head = nullptr;

void input_node() {
    node* node1 = new node;
    node1->name = "왕태규";
    node1->id = 202131463;
    node1->allowance = 100000;

    head = node1;

    node* node2 = new node;
    node2->name = "김시우";
    node2->id = 202131454;
    node2->allowance = 150000;

    node1->p_next = node2;

    node* node3 = new node;
    node3->name = "이제욱";
    node3->id = 202131416;
    node3->allowance = 190000;

    node2->p_next = node3;

    node* node4 = new node;
    node4->name = "이건희";
    node4->id = 202131415;
    node4->allowance = 170000;

    node3->p_next = node4;
}

void print_node() {
    node* ptr = head;

    while (ptr != nullptr) {
        cout << ptr->name << " " << ptr->id << " " << ptr->allowance << endl;
        ptr = ptr->p_next;
    }
}

int main()
{
    input_node();
    print_node();

    return 0;
}
