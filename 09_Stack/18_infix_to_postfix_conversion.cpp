//Code is Written By Krishna
//first u need to include __stack_functions_array__.cpp file
#include "__stack_functions_array__.cpp"

//Example
// infix = a+b*c-d/e
// postfix = abc-+de/-

//function for checking is operand
int is_operand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
    {
        return 0;
    }
    else
    {
        return 1;
    }
}

//function for finding precedence of operator
int precedence(char x)
{
    if (x == '+' || x == '-')
    {
        return 1;
    }
    else if (x == '*' || x == '/')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

//function for converting infix expression to postfix operation
char *to_postfix(string exp)
{
    struct stack s;
    char *postfix = new char[exp.size()];
    int i = 0, j = 0;
    while (i < exp.size())
    {
        if (is_operand(exp[i]))
        {
            postfix[j++] = exp[i++];
        }
        else
        {
            if (precedence(exp[i]) > precedence(top_c(s)))
            {
                push_c(&s, exp[i++]);
            }
            else
            {
                postfix[j++] = pop_c(&s);
            }
        }
    }
    while (!is_Empty(s))
    {
        postfix[j++] = pop_c(&s);
    }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    string exp = "a+b*c-d/e";
    cout << "Infix is: " << exp << endl;
    cout << "PostFix Expression is: ";
    char *post = to_postfix(exp);
    for(int i =0 ; i < exp.size() ; i++)
    {
        cout << post[i];
    }
    cout << endl;
    return 0;
}