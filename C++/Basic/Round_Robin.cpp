/*
->Round Robin Algorithm Using Circular LinkList
->@copyright : Vedant Shukla
*/
#include "bits/stdc++.h"
using namespace std;
class node
{
public:
  char name;
  int tm;
  int rt;
  node *next;
};

class rr
{
public:
  node *Head = NULL;

  int j = 65;

  void insert(int n)
  {
    node *nn = new node;
    nn->name = j++;
    nn->tm = n;
    nn->rt = nn->tm;

    if (Head == NULL)
    {
      Head = nn;
      Head->next = Head;
    }

    else
    {
      node *temp = Head;
      while (temp->next != Head)
        temp = temp->next;
      nn->next = temp->next;
      temp->next = nn;
    }
  }

  void quantum(int t)
  {
    node *temp = Head;
    int c = 0, i = 0;

    while (Head != NULL)
    {
      temp->rt = temp->rt - t;
      c = c + t;
      if (temp->rt <= 0)
      {

        c = c + temp->rt;
        cout << temp->name << "\t";
        cout << c << endl;
        del(temp->name);
        if (temp->next == temp)
        {
          break;
        }
      }

      temp = temp->next;
    }
  }

  void del(char x)
  {
    node *p = NULL;
    node *temp = Head;

    if (Head->name == x)
    {
      while (temp->next != Head)
        temp = temp->next;
      p = Head;
      temp->next = Head->next;
      Head = Head->next;
      delete p;
    }
    else
    {
      while (temp->name != x)
      {
        p = temp;
        temp = temp->next;
      }
      p->next = temp->next;
      delete temp;
    }
  }
};

int main()
{
  rr robin;
  int i, n, x, y, t;
  cout << "Enetr No. Of Process" << endl;
  cin >> y;
  cout << "Enter Time Consume By Single Process" << endl;
  cin >> t;
  cout << "Enter Time Taken in process " << endl;
  for (i = 0; i < y; i++)
  {
    cin >> n;
    robin.insert(n);
  }
  robin.quantum(t);

  return 0;
}