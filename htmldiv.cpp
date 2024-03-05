#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

// se for um único arquivo txt com o style inline e as divs juntas
fstream fillArquive(int nc, int ni){
    fstream arquivo;
    arquivo.open("imagesDiv.txt", ios::out);

    //adição do estilo inline
    arquivo << "<style>\n"
               "\tbody{\n"
               "\t\tmargin: 0 auto;\n\t\tpadding: 20px 20px;\n\t\tmax-width: 1440px;\n\t\tbackground-color: #140E10\n"
               "\t}"
               "\n\t.container{\n"
               "\t\tdisplay: flex;\n\t\tflex: wrap;\n\t\tgap: 10px;\n\t\tjustify-content: center;\n"
               "\t}"
               "\n\t.column{\n"
               "\t\tdisplay: flex;\n\t\tflex-direction: column;\n\t\tmax-width: 360px;\n\t\tgap: 10px;\n"
               "\t}"
            "\n</style>" << endl;

    //adição da div container
    arquivo << "\n\n<div class=\"container\">\n" << endl;
    int j = 1;
    for(int i=0; i<nc; i++){
        arquivo << "\t<div class=\"column\">" << endl;

        for(int n=0; n<ni ; n++, j++){
            arquivo << "\t\t<img src=\"IMG_"<< j <<".jpg\" width=\"100%\" alt=\"\">" << endl;
        }

        arquivo << "\t</div>" << endl;
    }
    arquivo << "\n</div>";

    return arquivo;
}


// se forem dois arquivos separados, HTML e CSS bases
fstream addHTMLstructure(int nc, int ni){

    fstream arquivo;
    arquivo.open("index.html", ios::out);

    //escreve a estrutura básica do arquivo em html
    arquivo << "<!DOCTYPE html>\n<html lang=\"pt-br\">"
               "\n<head>"
               "\n\t<meta charset=\"UTF-8\">"
               "\n\t<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
               "\n<link rel=\"stylesheet\" href=\"style.css\">"
               "\n\t<title>Document</title>"
               "\n</head>\n"
               "\n<body>\n" << endl;

    //adiciona as divs 
    arquivo << "\t<div class=\"container\">\n" << endl;
    int j = 1;
    for(int i=0; i<nc; i++){
        arquivo << "\t\t<div class=\"column\">" << endl;

        for(int n=0; n<ni ; n++, j++){
            arquivo << "\t\t\t<img src=\"IMG_"<< j <<".jpg\" width=\"100%\" alt=\"\">" << endl;
        }

        arquivo << "\t\t</div>" << endl;
    }
    arquivo << "\n\t</div>\n" << endl;

    //fecha o body e retorna o arquivo
    arquivo << "</body>";
    return arquivo;
}

fstream cssMaker(){
    fstream arquivo;
    arquivo.open("style.css", ios::out);

    arquivo << "body{\n"
               "\tmargin: 0 auto;\n\tpadding: 20px 20px;\n\tmax-width: 1440px;\n\tbackground-color: #140E10\n"
               "}"
               "\n.container{\n"
               "\tdisplay: flex;\n\tflex: wrap;\n\tgap: 10px;\n\tjustify-content: center;\n"
               "}"
               "\n.column{\n"
               "\tdisplay: flex;\n\tflex-direction: column;\n\tmax-width: 360px;\n\tgap: 10px;\n"
               "}" << endl;

    return arquivo;
}



int main(){

    int nc, ni;
    char opc;

    do{
        cout << "\n----------------------------------------------------------------";
        cout << "\nHi there, this is an Image Div Auto Generator!\n"
                "It'll do Image Divs for you based on a number of columns and a"
                " number of imagens for each column." << endl << "First of all, type the number of columns (1-4): ";
        cin >> nc;
    }while(nc<1 or nc>4);
    do{
        system("CLS");
        cout << "\n----------------------------------------------------------------";
        cout << "\nGreat!" << endl <<
                "Now, type the number of images for each column(1-20): ";
        cin >> ni;
    }while(ni<1 or ni>20);
    system("CLS");

    do{
        cout << "\n***************************************************************\n";
        cout << "OPTIONS:\n\t(a) A complete HTML and CSS;\n\t(b) Just the simple txt (divs and style);\n\t(e) Exit\nChoose an option: ";
        cin >> opc;
    } while (opc != 'a' and opc != 'b' and opc != 'e');

    fstream arquivo;
    fstream arquivo2;

    switch (opc) {
    case 'a':
        arquivo = addHTMLstructure(nc, ni);
        arquivo2 = cssMaker();
        arquivo.close();
        arquivo2.close();

        cout << "\n***************************************************************\n" << endl;
        cout << "Done! Look for files called \"index.html\" and \"style.css\" in this folder!" << endl;
        break;
    case 'b':
        arquivo = fillArquive(nc, ni);
        arquivo.close();

        cout << "\n***************************************************************\n" << endl;
        cout << "Done! Look for a file called \"imagesDiv.txt\" in this folder!" << endl;
        break;
    case 'e':
        exit(0);
    default:
        cout << "Something went wrong :/" << endl;
        break;
    }

    return 0;
}