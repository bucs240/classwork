template<class T> class Matrix
{
    private:
        T doubleArray [MAX_ROW][MAX_COLUMNS];
        int rows;
        int cols;
    public:
        Matrix(){rows=MAX_ROWS;cols=MAX_COLUMS;}
        void printMatrix();
        void setMatrix(T[],[][MAX_COLUMS]);
};
template<class T>void Matrix<T>::printMatrix()
{
    for(int i=0;i<rows;i++)
    {
        for（int j=0;j<column;j++)
        {
            std::cout<<doubleArray[i][j]<<std::endl;
        }
    }

}

template<class T>void Matrix<T>::setMatrix(T m[][MAX_COLUMNS])
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<colums;j++)
        {
            T var = m[i][j];
            doubleArray[i][j]=var;
        }
    }
{
