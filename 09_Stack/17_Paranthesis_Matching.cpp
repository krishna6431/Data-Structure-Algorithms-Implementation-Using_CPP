//first u need to include __stack_functions_array__.cpp file
#include "__stack_functions_array__.cpp"

//Example
// ((a+b) *(c-d))

//function for checking is parenthesis is balanced ort not
int is_Balance(string exp)
{
    struct stack s;
    s.size = exp.size();
    s.top = -1;
    s.stk1 = new char[s.size];
    for (int i = 0; i < s.size; i++)
    {
        if (exp[i] == '(')
        {
            push_c(&s, exp[i]);
        }
        else if (exp[i] == ')')
        {
            if (is_Empty(s))
            {
                return false;
            }
            else
            {
                pop_c(&s);
            }
        }
    }
    if (is_Empty(s))
    {

        return true;
    }
    else
    {
        return false;
    }
}

int main()
{

    string s = "((a+b)*(c-d))";
    int res = is_Balance(s);
    if (res)
    {
        cout << "Expression is: " << s << endl;
        cout << "Balanced Expression" << endl;
    }
    else
    {
        cout << "Expression is: " << s << endl;
        cout << "Not Balanced Expression" << endl;
    }

    string s1 = "((a+b)*)(c-d))";
    res = is_Balance(s1);
    if (res)
    {
        cout << "Expression is: " << s1 << endl;
        cout << "Balanced Expression" << endl;
    }
    else
    {
        cout << "Expression is: " << s1 << endl;
        cout << "Not Balanced Expression" << endl;
    }
}