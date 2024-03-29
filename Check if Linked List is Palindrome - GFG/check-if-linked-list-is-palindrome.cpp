//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<vector>
class Solution{
  private:
    bool checkPalindrome(vector<int> ans) {
        int n = ans.size();
        int s = 0;
        int e = n-1;
        while(s <= e) {
            if(ans[s] != ans[e]) 
                return false;
            s++;
            e--;
        }
        return true;
    }
    
    Node* getMid(Node* head) {
        Node* slow = head;
        Node* fast = head -> next;
        
        while(fast != NULL && fast -> next != NULL) {
            fast = fast -> next -> next;
            slow = slow -> next;
        }
        return slow;
    }
    Node* reverse(Node* head) {
        Node* curr = head;
        Node* prev = NULL;
        Node* next = NULL;
        while(curr != NULL) {
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        
        if(head->next == NULL) return true;
        Node* middle = getMid(head);
        
        Node* temp = middle -> next;
        middle -> next = reverse(temp);
        
        Node* h1 = head;
        Node* h2 = middle->next;
        while(h2 != NULL) {
            if(h1 -> data != h2 -> data) 
                return false;
            h1 = h1 -> next;
            h2 = h2 -> next;
        }
        Node* t = middle -> next;
        middle -> next = reverse(t);
        
        return true;
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends