// #include<iostream>

// using namespace std;

// class arm_strng
// {
//     public:
//     arm_strng()
//     {
//         int num,c,r,arm=0;

//       cout<<"Enter the number:";
//       cin>>num;

//       c=num;

//         while(num>0)
//         {
//             r=num%10;
//             arm=(r*r*r)+arm;
//             num=num/10;
//         }
//         if(c==arm)
//         {
//             cout<<"This is Armstrong number";
//         }
//         else{
//             cout<<"This is not armstrong number";
//         }
//     }
// };

// int main()
// {

//     arm_strng obj();

//     cout<<"\n\n";

//     return 0;
// }

#include <iostream>
using namespace std;
class armstrong
{
public:
    armstrong()
    {
        int n, c, add = 0, r;

        cout << "Enter the number" << endl;
        cin >> n;

        c = n;

        while (n > 0)
        {
            r = n % 10;
            add = (r * r * r) + add;
            n = n / 10;
        }
        if (c == add)
        {
            cout << "armstrong";
        }
        else
        {
            cout << "not armstrong";
        }
    }
};
int main()
{
    armstrong obj;
    return 0;
}

    