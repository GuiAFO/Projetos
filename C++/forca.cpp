//JOGO DA FORCA

#include <iostream>
using namespace std;

int main(){

    char u1, u2, u3, u4, u5, u6, u7, u8, u9, u10;

        cout <<  "Ola, seja bem vindo ao jogo da forca !!" << "\n\n";
    cout << "Voce pode ter ate cinco erros para adivinhar a palavra !!" << "\n\n";

    char p1[7]={'A','M','I','Z','A','D','E'};
    
    cout << "A primeira palavra possui 7 letras: _ _ _ _ _ _ _ " << "\n";

    cout << "\nDigite sua primeira letra: ";
    
    primeira : 
    
    cin >> u1;

    if (u1 == 'a' || u1 == 'A'){
        cout << "\n A _ _ _ A _ _ \n";
        goto segunda;
    } else if (u1 == 'E' || u1 == 'e'){
        cout << "\n_ _ _ _ _ _ E \n";
        goto segunda;
    } else if (u1 == 'I' || u1 == 'i'){
        cout << "\n_ _ I _ _ _ _ \n";
        goto segunda;
    } else if (u1 == 'M' || u1 == 'm'){
        cout << "\n_ M _ _ _ _ _ \n";
        goto segunda;
    } else if (u1 == 'Z' || u1 == 'z'){
        cout << "\n_ _ _ Z _ _ _ \n";
        goto segunda;
    } else if (u1 == 'D' || u1 == 'd'){
        cout << "\n _ _ _ _ _ D _ \n";
        goto segunda;
    } else{
        cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 4 TENTATIVAS !!!\n";
    }    
    
    segunda: 

    cout << "\nDigite sua segunda letra: ";
    cin >> u2;

    if (u1 == 'a' || u1 == 'A'){
            if (u2 == 'E' || u2 == 'e'){
            cout << "\nA _ _ _ A _ E \n";
            goto terceira;
        } else if (u2 == 'I' || u2 == 'i'){
            cout << "\nA _ I _ A _ _ \n";
            goto terceira;
        } else if (u2 == 'M' || u2 == 'm'){
            cout << "\nA M _ _ A _ _ \n";
            goto terceira;
        } else if (u2 == 'Z' || u2 == 'z'){
            cout << "\nA _ _ Z A _ _ \n";
            goto terceira;
        } else if (u2 == 'D' || u2 == 'd'){
            cout << "\n A _ _ _ A D _ \n";
            goto terceira;
        } else{
            cout << "TENTATIVA ERRADA !!! \n";
            // goto para terceira tentativa;
        }
    } else if (u1 == 'E' || u1 == 'e'){
        if (u2 == 'a' || u2 == 'A'){
            cout << "\n A _ _ _ A _ E \n";
            goto terceira;
        } else if (u2 == 'I' || u2 == 'i'){
            cout << "\n_ _ I _ _ _ E \n";
            goto terceira;
        } else if (u2 == 'M' || u2 == 'm'){
            cout << "\n_ M _ _ _ _ E \n";
            goto terceira;
        } else if (u2 == 'Z' || u2 == 'z'){
            cout << "\n_ _ _ Z _ _ E \n";
            goto terceira;
        } else if (u2 == 'D' || u2 == 'd'){
            cout << "\n _ _ _ _ _ D E \n";
            goto terceira;
        } else{
            cout << "TENTATIVA ERRADA !!! \n";
            // goto para terceira tentativa;
        }
    } else if (u1 == 'I' || u1 == 'i'){
        if (u2 == 'a' || u2 == 'A'){
            cout << "\n A _ I _ A _ _ \n";
            goto terceira;
        } else if (u2 == 'E' || u2 == 'e'){
            cout << "\n_ _ I _ _ _ E \n";
            goto terceira;
        } else if (u2 == 'M' || u2 == 'm'){
            cout << "\n_ M I _ _ _ _ \n";
            goto terceira;
        } else if (u2 == 'Z' || u2 == 'z'){
            cout << "\n_ _ I Z _ _ _ \n";
            goto terceira;
        } else if (u2 == 'D' || u2 == 'd'){
            cout << "\n _ _ I _ _ D _ \n";
            goto terceira;
        } else{
            cout << "TENTATIVA ERRADA !!! \n";
            // goto para terceira tentativa;
        }
    } else if (u1 == 'M' || u1 == 'm'){
        if (u2 == 'a' || u2 == 'A'){
            cout << "\n A M _ _ A _ _ \n";
            goto terceira;
        } else if (u2 == 'E' || u2 == 'e'){
            cout << "\n_ M _ _ _ _ E \n";
            goto terceira;
        } else if (u2 == 'I' || u2 == 'i'){
            cout << "\n_ M I _ _ _ _ \n";
            goto terceira;
        } else if (u2 == 'Z' || u2 == 'z'){
            cout << "\n_ M _ Z _ _ _ \n";
            goto terceira;
        } else if (u2 == 'D' || u2 == 'd'){
            cout << "\n _ M _ _ _ D _ \n";
            goto terceira;
        } else{
            cout << "TENTATIVA ERRADA !!! \n";
            // goto para terceira tentativa;
        };
    } else if (u1 == 'Z' || u1 == 'z'){
        if (u2 == 'a' || u2 == 'A'){
            cout << "\n A _ _ Z A _ _ \n";
            goto terceira;
        } else if (u2 == 'E' || u2 == 'e'){
            cout << "\n_ _ _ Z _ _ E \n";
            goto terceira;
        } else if (u2 == 'I' || u2 == 'i'){
            cout << "\n_ _ I Z _ _ _ \n";
            goto terceira;
        } else if (u2 == 'M' || u2 == 'm'){
            cout << "\n_ M _ Z _ _ _ \n";
            goto terceira;
        } else if (u2 == 'D' || u2 == 'd'){
            cout << "\n _ _ _ Z _ D _ \n";
            goto terceira;
        } else{
            cout << "TENTATIVA ERRADA !!! \n";
            // goto para terceira tentativa;
        }
    } else if (u1 == 'D' || u1 == 'd'){
        if (u2 == 'a' || u2 == 'A'){
            cout << "\n A _ _ _ A D _ \n";
            goto terceira;
        } else if (u2 == 'E' || u2 == 'e'){
            cout << "\n_ _ _ _ _ D E \n";
            goto terceira;
        } else if (u2 == 'I' || u2 == 'i'){
            cout << "\n_ _ I _ _ D _ \n";
            goto terceira;
        } else if (u2 == 'M' || u2 == 'm'){
            cout << "\n_ M _ _ _ D _ \n";
            goto terceira;
        } else if (u2 == 'Z' || u2 == 'z'){
            cout << "\n_ _ _ Z _ D _ \n";
            goto terceira;
        } else{
            cout << "TENTATIVA ERRADA !!! \n";
            // goto para terceira tentativa;
        }
    } else{
        cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 3 TENTATIVAS\n";
    };    

    terceira :
    
    cout << "\nDigite sua terceira letra: ";
    cin >> u3;

    if (u1 == 'a' || u1 == 'A'){
            if (u2 == 'E' || u2 == 'e'){
                if (u3 == 'I' || u3 == 'i'){
                    cout << "\nA _ I _ A _ E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\nA M _ _ A _ E \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\nA _ _ Z A _ E \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n A _ _ _ A D E \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }    
            goto quarta;
            } else if (u2 == 'I' || u2 == 'i'){
                if (u3 == 'E' || u3 == 'e'){
                    cout << "\nA _ I _ A _ E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\nA M I _ A _ _ \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\nA _ I Z A _ _ \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n A _ I _ A D _ \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }   
            goto quarta;
            } else if (u2 == 'm' || u2 == 'M'){
                if (u3 == 'E' || u3 == 'e'){
                    cout << "\nA M _ _ A _ E \n";
                    goto quarta;
                } else if (u3 == 'i' || u3 == 'I'){
                    cout << "\nA M I _ A _ _ \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\nA M _ Z A _ _ \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n A M _ _ A D _ \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }  
    goto quarta;
            } else if (u2 == 'Z' || u2 == 'z'){
                if (u3 == 'E' || u3 == 'e'){
                    cout << "\nA _ _ Z A _ E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\nA M _ Z A _ _ \n";
                 goto quarta;
                } else if (u3 == 'I' || u3 == 'i'){
                    cout << "\nA _ I Z A _ _ \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n A _ _ Z A D _ \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }   
    goto quarta;
            } else if (u2 == 'D' || u2 == 'd'){
                if (u3 == 'E' || u3 == 'e'){
                    cout << "\nA _ _ _ A D E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\nA M _ _ A D _ \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\nA _ _ Z A D _ \n";
                goto quarta;
                } else if (u3 == 'I' || u3 == 'i'){
                cout << "\n A _ I _ A D _ \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";  
                goto quarta;
                }
            }
    };
    if (u1 == 'e' || u1 == 'E'){
            if (u2 == 'A' || u2 == 'a'){
                if (u3 == 'I' || u3 == 'i'){
                    cout << "\nA _ I _ A _ E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\nA M _ _ A _ E \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\nA _ _ Z A _ E \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n A _ _ _ A D E \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }    
            goto quarta;
            } else if (u2 == 'I' || u2 == 'i'){
                if (u3 == 'A' || u3 == 'a'){
                    cout << "\nA _ I _ A _ E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\n_ M I _ _ _ E \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\n_ _ I Z _ _ E \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n _ _ I _ _ D E \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }   
            goto quarta;
            } else if (u2 == 'm' || u2 == 'M'){
                if (u3 == 'A' || u3 == 'a'){
                    cout << "\nA M _ _ A _ E \n";
                goto quarta;
                } else if (u3 == 'i' || u3 == 'I'){
                    cout << "\n_ M I _ _ _ E \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\n_ M _ Z _ _ E \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n _ M _ _ _ D E \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }  
    goto quarta;
            } else if (u2 == 'Z' || u2 == 'z'){
                if (u3 == 'A' || u3 == 'a'){
                    cout << "\nA _ _ Z A _ E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\n_ M _ Z _ _ E \n";
                 goto quarta;
                } else if (u3 == 'I' || u3 == 'i'){
                    cout << "\n_ _ I Z _ _ E \n";
                goto quarta;
                } else if (u3 == 'D' || u3 == 'd'){
                cout << "\n _ _ _ Z _ D E \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";
                }   
    goto quarta;
            } else if (u2 == 'D' || u2 == 'd'){
                if (u3 == 'A' || u3 == 'a'){
                    cout << "\nA _ _ _ _ D E \n";
                goto quarta;
                } else if (u3 == 'M' || u3 == 'm'){
                    cout << "\n_ M _ _ _ D E \n";
                 goto quarta;
                } else if (u3 == 'Z' || u3 == 'z'){
                    cout << "\n_ _ _ Z _ D E \n";
                goto quarta;
                } else if (u3 == 'I' || u3 == 'i'){
                cout << "\n _ _ I _ _ D E \n";
                goto quarta;
                } else{
                    cout << "TENTATIVA ERRADA !!! VOCE TEM MAIS 2 TENTATIVAS !!!\n";  
                goto quarta;
                }
            }
    };

    quarta:

    cout << "\nEntramos na quarta\n";


    system("pause");
    return 0;
}