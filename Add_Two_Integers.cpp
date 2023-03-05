class Solution {
public:
    int sum(int num1, int num2) {
        return(num1+num2);
    }
    int main()
    {
        int num1,num2;
        cin>>num1>>num2;
        cout<<sum(num1,num2);
        return 0;
    }
};