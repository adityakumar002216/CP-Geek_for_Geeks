//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};


// } Driver Code Ends
//User function Template for C++

/*

class Node{
public:
    int val;
    Node *next;
    Node(int num){
        val=num;
        next=NULL;
    }
};

*/

class Solution{
public:
   bool isPrime(int n)
{
    int k=0;
    if(n==1)
    {
        k++;
    }
    
    for(int i=2; i<=sqrt(n); i++)
    { 
        if(n%i==0)
         k++;

       
    }
    return k==0;
    
    
}
    Node *primeList(Node *head){
        
        Node* temp=head;
        while(temp!=NULL)
        {
            int n=temp->val;
            if(n==1)
               {
                temp->val=2;
                temp=temp->next;
                continue;
                }
      int prev=n;
      int ahead=n;
            while(!isPrime(prev))
            {
                prev--;
            }
            
            while(!isPrime(ahead))
            {
                ahead++;
            }
            
            int dis1=ahead-n;
            int dis2=n-prev;
            if(dis1<dis2)
            {
                temp->val=ahead;
            }
            else if(dis2<dis1)
            {
                temp->val=prev;
            }
            else
            {
                temp->val=prev;
            }
            temp=temp->next;
            
            
        }
        
        return head;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        Node *head,*tail;
        int num;
        cin>>num;
        head=tail=new Node(num);
        for(int i=0;i<n-1;i++){
            int num;
            cin>>num;
            tail->next=new Node(num);
            tail=tail->next;
        }
        Solution ob;
        Node *temp=ob.primeList(head);
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}
