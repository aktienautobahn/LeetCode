#include <iostream>
#include <vector>
#include <chrono>

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// Function to create a linked list from a vector of values
ListNode* createLinkedList(const std::vector<int>& values) {
    ListNode dummy; // A dummy node to simplify the logic
    ListNode* current = &dummy; // Start current at the dummy node

    for (int value : values) {
        if (value != 0) {  // Only create nodes for non-zero values
            current->next = new ListNode(value); // Link new node to the list
            current = current->next;  // Move current to the new node
        }
    }

    return dummy.next; // Return the actual head, which is dummy.next
}

void printList(ListNode* head) {
    ListNode* current = head; // Start from the head of the list
    while (current != nullptr) {
        std::cout << current->val; // Print the value of the current node
        if (current->next != nullptr) {
            std::cout << " -> "; // Print an arrow if there is a next node
        }
        current = current->next; // Move to the next node
    }
    std::cout << std::endl; // Print a newline at the end
}

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        // edge case for both empty lists
        if (list1 == nullptr && list2 == nullptr) return nullptr;

        ListNode dummy; // dummy node initialization
        ListNode* current = &dummy;

        while(list1 != nullptr && list2 != nullptr) {
            if (list1->val <= list2->val) {
                current->next = list1;
                list1 = list1->next;
            } else {
                current->next = list2;
                list2 = list2->next;
            }
            current = current->next;
        }
        // add remaining list

        if (list1 != nullptr) current->next = list1;
        if (list2 != nullptr) current->next = list2;

        return dummy.next;
        
        }
};

int main() {
    using std::chrono::high_resolution_clock;
    using std::chrono::duration_cast;
    using std::chrono::duration;
    using std::chrono::milliseconds;

    // Create the two linked lists
    ListNode* list1 = createLinkedList({1, 2, 4, 5, 6, 9, 10});
    ListNode* list2 = createLinkedList({1, 3, 4, 7, 8, 10, 11});

    Solution obj;
    
    auto t1 = high_resolution_clock::now();
    ListNode* sortedResult = obj.mergeTwoLists(list1, list2);
    auto t2 = high_resolution_clock::now();

   /* Getting number of milliseconds as an integer. */
    auto ms_int = duration_cast<milliseconds>(t2 - t1);

    /* Getting number of milliseconds as a double. */
    duration<double, std::milli> ms_double = t2 - t1;

    std::cout << ms_int.count() << "ms\n";
    std::cout << ms_double.count() << "ms\n";
    printList(sortedResult);

    return 0;
}

