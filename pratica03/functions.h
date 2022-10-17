namespace functions
{

    template <class T>
    T change(T &a, T &b)
    {
        float aux = a;
        a = b;
        b = aux;

        return a, b;
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
}