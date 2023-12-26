#include <iostream>
#include <vector>




using namespace std;



void some_function(const vector <int> & v){
    for (int i = 0; i < 10; i++) {
    cout << v[i] << " ";
    }
}





int main(){
    int i;
    vector < int > v(10);

    for (int i = 0; i < 10; i++) {
    v[i] = (i + 1) * (i + 1);
    cout << v[i] << " ";
    }
    cout << endl;
    for (int i = 9; i > 0; i--) {
    v[i] -= v[i - 1];
    cout << v[i] << " ";
    }
    cout << endl;

    // bool is_nonempty = !v.empty(); //modo correto de verificar vetor

    cout << v.size() << endl;
    v.resize(15);
    //Resize enche novas posições com zero
    for (int i = 0; i < 16; i++) {
    cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size() << endl;
    v.clear();
    cout << '\n' << v.size() << endl;



/* Podemos iniciar vetores com valores específicos:
    vector < string > names(20, “Unknown”);

*/
    vector <string> names (3, "Unknown");
    for (int i =0; i <3; ++i)
    cout << names[i] << endl;
/*Inserindo valores em vetor
    Podemos usar o push_back()
    std::vector<int> numbers = {1, 2, 3, 4, 5};
auto it = numbers.begin() + 2;  // Iterator pointing to the third element
numbers.insert(it, 10);        // Inserts 10 before the third element

*/

/*QUando vetores são passados como parâmetros para uma função, uma cópia de vetores é criado. 
Podemos declará-lo da seguinte forma 
void some_function(const vector < int > & v) { // OK
   // …
 }


E se formo alterar o conteúdo do vetor, é só omitir const
 void modify_vector(vector < int > & v) { // Correct
  v[0]++;
}
*/
    v.clear();
    v.resize(10);
    for (int i = 0; i < 10; i++) {
    v[i] = (i + 1) * (i + 1);
    }
    some_function(v);


    return 0;
}