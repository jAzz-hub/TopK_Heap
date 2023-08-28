#include "StructuresAndSignatures.hpp"

using namespace std;
/// @brief Call the everythingForEachInput function with files paths of paths variable used as parameter;
int main()
{
    string paths[2] = {"./dataset/DomCasmurro.data", "./dataset/Semana_Machado_Assis.data"};
    
    cout<<"\n\n\n";
    cout<<"Carregando TopK elementos de "<<paths[i]<<"..."<<"\n";
    for( unsigned int i = 0; i < 2 ;i++)
    {
        everythingForEachInput(paths[i]);
    }

    return 0;
}
