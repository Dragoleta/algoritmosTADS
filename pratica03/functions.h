template <class T>
void change(T &a, T &b)
{
    float aux = a;
    float a1 = b;
    float b1 = aux;
}

int max(const int a, const int b)
{
    if (a > b)
    {
        return a;
    }

    return b;
}

template <class T>
T min(const T a, const T b)
{
    if (a < b)
    {
        return a;
    }

    return b;
}