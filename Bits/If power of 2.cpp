bool ispowerof2 ( cpp_int num )
{
    if ( ( num & ( num - 1 ) ) == 0 )
        return 1;
    return 0;   
}