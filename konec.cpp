#include <iostream>
#include <string.h>
#include <windows.h>
#include <chrono>
#include <thread>


using namespace std;
using namespace chrono;
using namespace this_thread;

void rozdeleni ();
void tecky();



// toto jsou kratochvilka adventures, pribeh nahodneho studenta, ktery bojuje s touto prokletou skolou.
int main ()
{


// deklarace promennych----------------------------------------------------------------
    string volba1, pythag, kontrola, username,rovnice1, prijces1, prijces2, obor, sport, praxe, znamky, predmet, lyzak;
    int vek=15;
//-------------------------------------------------------------------------------------

//zadani nicku-------------------------------------------------------------------------
UPLNYZACATEK:
    cout << "zadej svuj nick: ";
    getline (cin, username);
    cout << endl;
//-------------------------------------------------------------------------------------
// inititial dialogue
ZACATEK:
    cout << "Vitej na spsei, " << username <<
         ". Ses si jisty, ze sem opravdu ches jit? [ano/ne]" << endl;

    getline (cin, volba1);

// volba ne
    if (volba1 == "ne")
    {
        cout << "Dobre delas" << endl;

    }
//volba ano--------------------------------------------------------------------------------
    else if (volba1 == "ano")
    {
        cout << "lituju te, udelal jsi zivotni chybu hahaha" << endl;
        for (int i = 0; i < 3; i++)
        {
            sleep_for(1s);
            cout << ". ";
        }
        rozdeleni ();

//prijmacky----------------------------------------------------------------------------
PRIJMACKY:
        sleep_for(2s);

        cout << "tak jdeme na to, prijmacky" << endl;
        cout << "je ti " << vek << " let"  << endl;
        sleep_for(1s);
//otazka 1 ----------------------------------------------------------------------------
        cout <<"zadej obecny vzorec pro pythagorovu vetu: (bez mezer,priklad: x^2=y)"<< endl;
        getline (cin, pythag);
        cout << endl;
        cout <<" kolik se rovna X v rovnci x+y=1?" ;
        getline (cin,rovnice1);
        cout << endl;
        cout <<" dopln y/i : v_mrdana kratochv_lka (ve tvaru x,y)" ;
        getline (cin,prijces1);
        cout << endl;
        cout <<"dopln carky do vety : stve me ze jsem sel na tuhle skolu (dbej na pravidla psani carek)" ;
        getline (cin,prijces2);
        cout << endl;
//if ((pythag == "a^2+b^2=c^2" && rovnice1=="x=1-y") && ( prijces1=="y,i" && prijces2=="stve me, ze jsem sel na tuhle skolu"))
        if ((pythag == "" && rovnice1=="") && ( prijces1=="" && prijces2==""))
        {


            cout << "zvladl jsi to!"<< endl;
            cout << "dostal ses na stredni v " << vek << "letech" << endl;
            rozdeleni ();
ZVOLOBOR:
            cout << "zvol si obor (elektrotechnika/IT)" << endl;
            getline(cin,obor);



//Obor elektrotechnika//
            if(obor=="elektrotechnika")
            {
                 int trida1, prichoduc;

                tecky();
                cout << "Vitej na oboru elektrotechnika" << endl;
                tecky();
                cout << "Gratuluji, vybral sis tu jednodussi moznost, vyhnes se spouste idiotu a problemu... WP bro" << endl;//
                tecky();
                cout<< "Vitej ve sve tride" << endl;
                cout<< "Vidis ve tride holky? Lets goo, myslis si ze jsi vyhral, ale opak je pravdou kamo, ver mi :) " << endl;
                tecky();
                tecky();
                cout<< "Tvoje moznosti" << endl;

                cout<< "Moznost 1: Sednout si do lavice" << endl;
                cout<< "Moznost 2: Jit si promluvit s random typkem " << endl;

                cin >> trida1;

                if (trida1==1)
                {
                    cout<< "Sel sis sednout do lavice" << endl;
                }

                if (trida1==2)
                {
                    cout<< "Sel sis promluvit s random typkem" << endl;
                }
                tecky();
                cout<< "*Ucitel prisel do tridy*" << endl;



                if (trida1==2)
                {
                    cout<< "Ucitel: Hej ty tam bez si sednout do lavice!" << endl;
                    tecky();
                }

                if (trida1==1 || trida1==2)
                {
                    cout<< "Ucitel: Dobry den jmenuji se Blazej, budu vas ucit ELT a budu vas trdini ucitel" << endl;
                    tecky();
                    cout<< "Ucitel: V dnesni hodine si udelame uvod do ELT" << endl;
                    tecky();
                    cout<< "*Jsi vyzvan ke zkouseni*" << endl;
                    tecky();
                    cout<< "Sam vis ze, nic nevis" << endl;
                    cout<< "Ale chces se ukazat pred novou tridou" << endl;
                    tecky();
                    cout<< "Ucitel se te zepta na ctyri otazky" << endl;
                    cout<< "Bodovani je nasledujici. Ctyri odpovedi 1. Tri odpovedi 2. Dve odpovedi 3. Jedna odpoved 4. Zadna odpoved 5" << endl;

                    cout<< "Prvni otazka" << endl;

                    cout<< "Ktery z materialu nevede elektricky proud ?" << endl;
                    cout <<"A) polovodic B) slitiny chromu C) vodic D) izolant" << endl;




                    string odpoved1;

                    cin >> odpoved1;

                    int body = 4;;

                    if(odpoved1 == "A")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    if(odpoved1 == "B")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    if(odpoved1 == "C")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }
                    if(odpoved1 == "D")
                    {
                        cout << "Spravna odpoved" << endl;
                    }

                    cout<< "Druha otazka" << endl;

                    cout<< "V trifazove soustave nn se nulovy vodic N nejcasteji znaci barvou ?" << endl;
                    cout <<"A) cernou, hnedou B) modrou C)zelenozlutou D) zalezi na projektantovi" << endl;

                    string odpoved2;

                    cin >> odpoved2;

                    if(odpoved2 == "A")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    if(odpoved2 == "B")
                    {
                        cout << "Spravna odpoved" << endl;

                    }

                    if(odpoved2 == "C")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }
                    if(odpoved2 == "D")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    cout<< "V jakych jednotkach se udává elektricky náboj ?" << endl;
                    cout <<"A) Q - mol B) Wb - Weber C) S - Siemens D) C - Coulomb" << endl;

                    string odpoved3;

                    cin >> odpoved3;

                    if(odpoved3 == "A")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    if(odpoved3 == "B")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    if(odpoved3 == "C")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }
                    if(odpoved3 == "D")
                    {
                        cout << "Spravna odpoved" << endl;
                    }

                    cout<< "Cemu je roven soucet ubytku napeti v uzavrene smycce ?" << endl;
                    cout <<"A) Roven zhruba nejvyssimu ubytku napeti B) Roven nule C) Roven napeti zdroje D) Obecne ruzny nenulovy" << endl;


                    string odpoved4;

                    cin >> odpoved4;


                    if(odpoved4 == "A")
                    {
                        cout << "Spravna odpoved" << endl;

                    }

                    if(odpoved4 == "B")
                    {
                        cout << "Spravna odpoved" << endl;

                    }

                    if(odpoved4 == "C")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }
                    if(odpoved4 == "D")
                    {
                        cout << "Spatna odpoved" << endl;
                        body --;
                    }

                    cout << "Pocet spravnych odpovedi je:" <<  body << endl;

                    if(body==4)
                    {
                        cout << "Znamka je 1" << endl;
                    }
                    if(body==3)
                    {
                        cout << "Znamka je 2" << endl;
                    }
                    if(body==2)
                    {
                        cout << "Znamka je 3" << endl;
                    }
                    if(body==1)
                    {
                        cout << "Znamka je 4" << endl;
                    }
                    if(body==0)

                    {
                        cout << "Znamka je 5" << endl;
                    }



                    cout << "Uspesne jsi dokoncil svuj prvni den na kratochvilce"<<endl;
                    cout<< "druhy den zacina, jsi pripraven? ne/ano";
                    string pripraven;
                    cin >> pripraven;

                    if(pripraven=="ne"){
                        cout << "mas beztak depresi uz z toho prvniho dne, to je normalni" << endl;
                        tecky();
                        cout << "muzes jit spat, nikdo neni doma" << endl;
                        cout << "*jdes spat*" << endl;
                        tecky();
                        tecky();
                        cout << "po tvem velice narocnem spanku te matka probouzi se slzama v ocich" << endl;
                        cout << "*ptas se co se deje*" << endl;
                        cout << "Matka: muzes byt rad, ze jsi dneska zustal doma, nejaky Sosnovec vystrilel skolu" << endl;
                        cout << "Opravdu chces zustat na takove skole?" << endl;
                        string zustat;
                     cin >> zustat ;
                        if(zustat=="ne"){
                                tecky();
                            cout << "dobre jsi dnes udelal, toto spravne rozhodnuti te bude provazet cely zivot, az uvidis sve kamarady programatory a elektrotechniky umirat v depresich"<< endl;
                              tecky();
                            cout<< "SUSNOVEC GOOD ENDING ACHIEVED" << endl;
                            string konec;


                        }

                        if(zustat=="ano"){
                                tecky();
                            cout << "po tomhle incidentu ti to rodice stejne nedovoli, ale ver mi, jednou jim budes dekovat"<< endl;
                                tecky();
                            cout << "SUSNOVEC GOOD ENDING ACHIEVED";


                        }




                        }

                        if(pripraven=="ano"){
                            cout<< "divim se ze po tom zkouseni nemas dost" << endl;
                            cout << "tak jdeme na to no" << endl;
                            tecky();
                            cout << "uz jsi ve tride a cekas az do tridy prijde ucitel" << endl;
                            tecky();
                            LOLLOL:
                            cout << "*SLYSIS STRELBU A KRIK*" << endl;
                            cout << " CO UDELAS V TETO SITUACI" << endl;
                            cout<< "moznosti: "<< endl;
                            cout << "moznost 1: vyskocis z okna" << endl;
                            cout << "moznost 2: vybehnes na chodbu" << endl;
                            cout << "moznost 3: schovas se" << endl;
                         int shooting;
                         cin>> shooting;
                        if(shooting==1){
                        cout<< "zemrel jsi, konec hry, mozna bysis mohl priste uvedomit, ze skok z pateho patra budovy B, neni zrova neco co bys mohl prezit";
                        return 0;
                        }
                        if(shooting==2){
                            cout<< "zemrel jsi, byl jsi zastrelen....nemyslis, ze kdyz slysis strelbu, neni zrovna moudre vybihat na chodbu????" << endl;
                        return 0;
                        }
                        if(shooting==3){
                           cout<< "*schoval ses na konec ucebny za stul*" << endl;
                           cout << "*cekas co se stane*" << endl;
                           tecky();
                           cout << "Susnovec vykopne dvere a automatickou puskou vystrili celou tvou tridu, ne ze by ti to vadilo, byla to banda debilu"<< endl;
                           cout << " nestastne pro tebe, susnovec ma WH a dal ti one-tap pres stul za kterym jsi byl schovany" << endl;
                           cout << "mozna si ted rikas neco jako 'proc vsechny endingy konci smrti?' " << endl;
                           tecky();
                           cout << "odpoved je jasna, vyvojari teto low budget hry, byli opravdu lini, co se da...neslo nic" << endl;
                           return 0;
                        }
                    }













    return 0;





    }


            }

//obor IT//
            else if(obor=="IT")
            {


                int trida1, prichoduc;

                tecky();
                cout << "Vitej v prvnim rocniku, zde zacina tva cesta" << endl;
                cout << "Vitej na oboru informatika" << endl;
                cout << "Gratuluji, horsi moznost kamo, preji tve psychice GL" << endl;
                tecky();
                cout<< "Vitej ve sve tride" << endl;
                cout<< "Vidis ve tride holky? Lets goo, myslis si ze jsi vyhral, ale opak je pravdou kamo, ver mi :) " << endl;
                tecky();
                cout<< "Tvoje moznosti" << endl;

                cout<< "Moznost 1: Jit studovat programovani" << endl;
                cout<< "Moznost 2: Jit studovat site" << endl;

                cin >> trida1;

                if (trida1==1)
                {
                    cout<< "Vybral sis programovani" << endl;
                }

                else if (trida1==2)
                {
                    cout<< "Vybral sis site" << endl;
                }
                tecky();
                cout<< "*Ucitel prisel do tridy*" << endl;



                if (trida1==2)
                    //zacatek siti
                {
                    cout<< "*Prichazi do tridy boss sti*" << endl;
                    cout<< "Ucitel: Dobry den jmenuji se Jiri Kacmarik, budu vas ucit site" << endl;
                    tecky();
                    cout<< "Ucitel: Budu zkouset nekolik lidi kazdou hodinu" << endl;
                    cout<< "*POV uz vis ze jsi v prdeli*" << endl;

                    cout << "Chces po pul roce porad zustat na teto skole/oboru [ano/ne] ?" << endl;

                    cin >> volba1;


                    if (volba1 == "ano")
                    {
                        cout << "WAUUU. To jsem necekal. Mas koule " << endl;

                        cout<< "" << endl;
                        tecky();

                        cout << "Tak to hura do tretaku" << endl;

                    }

                    if (volba1 == "ne")
                    {
                        cout << "Chapu te, co ted s tebou ?" << endl;
                        cout<< "" << endl;
                        tecky();

                        cout << "Chces zkusit jiny obor nebo jinou skolu ???? [Skola/Obor]" << endl;

                        cin >> volba1;

                        if (volba1 == "Skola")
                        {
                            cout << "Tak to cusss , bylo mi cti poznat te " << endl;


                        }
                        else  if (volba1 == "Obor")

                        {

                            cout << "HMM , a jak dlouho vydrzis tam ??? " << endl;



                            cout<< "Vybral sis site" << endl;

                            cout<< "*Prichazi do tridy boss sti*" << endl;
                            cout<< "Ucitel: Dobry den jmenuji se Jiri Kacmarik, budu vas ucit site" << endl;
                            tecky();
                            cout<< "Ucitel: Budu zkouset nekolik lidi kazdou hodinu" << endl;
                            cout<< "*POV uz vis ze jsi zase v prdeli*" << endl;


                            cout << "No jo uz vis, ze ti nic nepomuze . Sajonara " << endl;




                        }



                    }


                    cout << "Vitej ve tretaku" << endl;

                    tecky();

                    cout << "Ceka te nejtezsi rocnik " << endl;

                    cout << " Byl jsi nekdy na lyzaku ????" << endl;




                    cout << " Jestli ne tak to se rychle zmeni." << endl;

                    cout << " Zadej pro zajimavost , jestli mas zajem o lyze nebo snowboard " << endl;

                    cin >> sport;

                    tecky();

                    cout << " Urcite jsi napsal lyze :) " << endl;

                    cout << " Protoze lyzare ma na starosti pan ucitel Slezak, prisun alkoholu zajisten. " << endl;

                    cout << " GOOD LUCK" << endl;

                    cout << " Tak co jaky byl lyzak ????" << endl;

                    cout << "Doufam ze vam nikdo nenasel chlast ano/ne" << endl;


                    tecky();
                    sleep_for(0.5s);

                    cin >> lyzak;

                    if(lyzak== "ne")
                    {
                        cout << "Nikdo na nic neprisel " << endl;
                        cout << "Vyborna prace, jsi po me brasko " << endl;
                    }

                    else if(lyzak == "ano")
                    {
                        cout << " Hvizdak nasel vino " << endl;
                        cout << " Trochu v prdeli, ale nevadi, Hvizdak je chabr vypil vino, ale nic neresil. Pouze jste prisli o flasku. " << endl;
                    }







                    tecky();
                    sleep_for(0.5s);

                    cout << " No jo minuly rok byl Covid , alet tenhle rok te uz Praxe ve firme neminou" << endl;

                    cout << " seznam praxi: Unicorn Storaenso D3Soft NetDirect K2 Kvados MEARING ELVAC Tieto ABB " << endl;

                    cin >> praxe;

                    cout << " Je jedno co si vyberes, ale vsechno ti pomuze v budoucim rozvoji (samozrejme TIETO je top :) )" << endl;

                    tecky();
                    sleep_for(0.5s);

                    cout << "Ubehly 2 tydny a jsi zpatky ve skole" << endl;

                    cout << " Jak jsi na tom se znamkama ??? [ezzy/nic moc/propadam]" << endl;

                    cin >> znamky;

                    if(znamky == "ezzy")
                    {
                        cout << " lets gooo , ctvrtak o je blizko" << endl;
                    }

                    else if(znamky == "nic moc")
                    {
                        cout << " tak to hlavne nepos**" << endl;
                    }
                    else if(znamky == "propadam")
                    {
                        cout << "nikdy nerikej nikdy, snad se jeste uvidime, kdyztak v lete opravaky :) " << endl;

                        return 0;
                    }

                    cout << "Vitej ve ctvrtaku" << endl;

                    cout << "NO a co ted ???" << endl;

                    cout << "Cele 3 roky jsi se na tohle pripravoval " << endl;
                    tecky();
                    cout << "Snad mas hotovou celou povinnou cetbu ???" << endl;
                    cout << "Snad jsi si neprosel vsim tim peklem s Helsty zbytecne ??" << endl;
                    tecky();

                    cout << "Predmety na maturitu jsou : Cestina, Matematika/Anglictina, Site a dalsi si musis vybrat. Co si vyberes ????" << endl;
                    cin >> predmet;
                    cout << "Tvoje predmety jsou :" << predmet << " Cestina, Matematika/Anglictina, Site " << endl;

                    tecky();


                    cout << " Predstav si ze jsi na ustni maturite z cestiny a tahle otazka rozhodne jestli udelas maturitu" << endl;
                    tecky();

                    cout << " Ucitelka Seligova se te zepta na tuto otazku : Rekni mi jmeno autora, ktery napsal povidku Starec a More" << endl;

                    string autor;

                    cin >> autor;

                    if(autor == "E.Hemingway")
                    {

                        cout << "Blahopreju. Maturitu z cestiny mate uspesne za sebou" << endl;


                    }

                    else
                    {
                        cout << "Smula zase v zari navidenou " << endl;
                        return 0;
                    }

                    cout << "Cestinu mas za sebou, ale cekejai te dalsi predmety " << endl;
                    tecky();

                    rozdeleni();

                    cout << " Predstav si ze jsi na ustni maturite z anglictiny a tahle otazka rozhodne jestli udelas maturitu" << endl;
                    tecky();

                    cout << " Ucitelka Martinakova se te zepta na tuto otazku : Rekni mi hlavni mesto Australie" << endl;

                    string mesto;

                    cin >> mesto;

                    if(mesto == "Canberra")
                    {

                        cout << "Blahopreju. Maturitu z anglictiny mate uspesne za sebou" << endl;


                    }

                    else  cout << "Smula zase v zari navidenou " << endl;

                    cout << "Cestinu a anglictinu mas za sebou, ale cekejai te dalsi predmety " << endl;
                    tecky();

                    rozdeleni();

                    cout << " Predstav si ze jsi na prakticke maturite ze Siti a tahle otazka rozhodne jestli udelas maturitu" << endl;
                    tecky();

                    cout << " Ucitel Kacmarik se te zepta na tuto otazku : Kolik bitu ma adresa ipv6 ???" << endl;

                    string site;

                    cin >> site;

                    if(site == "128")
                    {

                        cout << "Blahopreju. Maturitu ze siti mas uspesne za sebou" << endl;


                    }

                    else  cout << "Smula zase v zari navidenou " << endl;

                    cout << "Cestinu, anglictinu a site mas za sebou, ale cekejai te dalsi predmety " << endl;

                    rozdeleni();

                    cout << " Predstav si ze jsi na prakticke maturite z databazi a tahle otazka rozhodne jestli udelas maturitu" << endl;
                    tecky();

                    cout << " Ucitelka Revendova se te zepta na tuto otazku : Rekni mi jednu agregacni funkci  ???" << endl;

                    string funkce;

                    cin >> funkce;

                    if(funkce == "AVG")
                    {
                        cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;
                    }

                    if(funkce == "COUNT")
                    {
                        cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;
                    }

                    if(funkce == "MAX")
                    {

                        cout << "Blahopreju. Maturitu z databti mate uspesne za sebou" << endl;
                    }

                    if(funkce == "MIN")
                    {

                        cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;

                    }

                    if(funkce == "SUM")
                    {

                        cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;

                    }


                    else  cout << "Smula zase v zari navidenou " << endl;







                    rozdeleni();







                    cout << "Ty jsi to vazne dokazal :) Ted jsi uspesnym absolventem prestizni skoly" << endl;


                    return 0;
                }

//Konec siti






            }



            int trida2;
            if (trida2==1)
            {
                cout<< "*Prichazi do tridy boss programovani*" << endl;

                cout<< "" << endl;
                tecky();
                cout<< "Ucitel: Dobry den jmenuji se Radek Nowak, budu vas ucit programovani a trapit vas s databazema" << endl;
                tecky();
                cout<< "*POV uz vis ze jsi v prdeli*" << endl;
                tecky();
                cout<< "*Zacinas se bat o sve psychicke zdravi*" << endl;

            }

            cout << "Chces po pul roce porad zustat na teto skole/oboru [ano/ne] ?" << endl;

            cin >> volba1;


            if (volba1 == "ano")
            {
                cout << "WAUUU. To jsem necekal. Mas koule " << endl;

                cout<< "" << endl;
                tecky();

                cout << "Tak to hura do tretaku" << endl;

            }

            if (volba1 == "ne")
            {
                cout << "Chapu te, co ted s tebou ?" << endl;
                cout<< "" << endl;
                tecky();

                cout << "Chces zkusit jiny obor nebo jinou skolu ???? [Skola/Obor]" << endl;

                cin >> volba1;

                if (volba1 == "Skola")
                {
                    cout << "Tak to cusss , bylo mi cti poznat te " << endl;


                }
                else  if (volba1 == "Obor")

                {

                    cout << "HMM , a jak dlouho vydrzis tam ??? " << endl;



                    cout<< "Vybral sis site" << endl;

                    cout<< "*Prichazi do tridy boss sti*" << endl;
                    cout<< "Ucitel: Dobry den jmenuji se Jiri Kacmarik, budu vas ucit site" << endl;
                    tecky();
                    cout<< "Ucitel: Budu zkouset nekolik lidi kazdou hodinu" << endl;
                    cout<< "*POV uz vis ze jsi zase v prdeli*" << endl;


                    cout << "No jo uz vis, ze ti nic nepomuze . Sajonara " << endl;




                }



            }


            cout << "Vitej ve tretaku" << endl;

            tecky();

            cout << "Ceka te nejtezsi rocnik " << endl;

            cout << " Byl jsi nekdy na skolnim Turnaji ????" << endl;




            cout << " Jestli ne tak to se rychle zmeni, ceka te totiz letos hodne aktivit/turnaju" << endl;

            cout << " Zadej pro zajimavost , jaky sport/aktivitu hrajes/delas ??? " << endl;

            cin >> sport;

            tecky();

            cout << " Urcite jsi napsal fotbal :) " << endl;

            cout << " Tak to pro tebe mam dobrou zpravu, protoze zrovna tebe vybral ucitel Tesar na skolni fotbalovy trunaj" << endl;

            cout << " GOOD LUCK" << endl;

            cout << " Tak co jak jste dopadli ????" << endl;


            tecky();
            sleep_for(0.5s);
            int vysledek;

            cin >> vysledek;

            if(vysledek = 1)
            {
                cout << "No jo prestiz vzdycky prvni " << endl;
            }

            else if(vysledek = 2)
            {
                cout << " HMMM lepsi nez nic" << endl;
            }

            else if(vysledek > 2)
            {
                cout << " To radsi nic nerikej " << endl;
            }




            //cout<< "zadal jsi neco jineho, zvol znovu"<< endl;
            //goto ZVOLOBOR;

            tecky();
            sleep_for(0.5s);

            cout << " No jo minuly rok byl Covid , alet tenhle rok te uz Praxe ve firme neminou" << endl;

            cout << " seznam praxi: Unicorn Storaenso D3Soft NetDirect K2 Kvados MEARING ELVAC Tieto ABB " << endl;

            cin >> praxe;

            cout << " Je jedno co si vyberes, ale vsechno ti pomuze v budoucim rozvoji (samozrejme TIETO je top :) )" << endl;

            tecky();
            sleep_for(0.5s);

            cout << "Ubehly 2 tydny a jsi zpatky ve skole" << endl;

            cout << " Jak jsi na tom se znamkama ??? [ezzy/nic moc/propadam]" << endl;

            cin >> znamky;

            if(znamky == "ezzy")
            {
                cout << " lets gooo , ctvrtak o je blizko" << endl;
            }

            else if(znamky == "nic moc")
            {
                cout << " tak to hlavne nepos**" << endl;
            }
            else if(znamky == "propadam")
            {
                cout << "nikdy nerikej nikdy, snad se jeste uvidime :) " << endl;

                return 0;
            }

            cout << "Vitej ve ctvrtaku" << endl;

            cout << "NO a co ted ???" << endl;

            cout << "Cele 3 roky jsi se na tohle pripravoval " << endl;
            tecky();
            cout << "Snad mas hotovou celou povinnou cetbu ???" << endl;
            cout << "Snad jsi si neprosel vsim tim peklem s Helfsty zbytecne ??" << endl;
            tecky();

            cout << "Predmety na maturitu jsou : Cestina, Matematika/Anglictina, Programovani a dalsi si musis vybrat. Co jsi vyberes ????" << endl;
            cin >> predmet;
            cout << "Tvoje predmety jsou :" << predmet << " Cestina, Matematika/Anglictina, Programovani " << endl;

            tecky();


            cout << " Predstav si ze jsi na ustni maturite z cestiny a tahle otazka rozhodne jestli udelas maturitu" << endl;
            tecky();

            cout << " Ucitelka Seligova se te zepta na tuto otazku : Rekni mi jmeno autora, ktery napsal povidku Starec a More" << endl;

            string autor;

            cin >> autor;

            if(autor == "E.Hemingway")
            {

                cout << "Blahopreju. Maturitu z cestiny mate uspesne za sebou" << endl;


            }

            else
            {
                cout << "Smula zase v zari navidenou " << endl;
                return 0;
            }

            cout << "Cestinu mas za sebou, ale cekejai te dalsi predmety " << endl;
            tecky();

            rozdeleni();

            cout << " Predstav si ze jsi na ustni maturite z anglictiny a tahle otazka rozhodne jestli udelas maturitu" << endl;
            tecky();

            cout << " Ucitelka Martinakova se te zepta na tuto otazku : Rekni mi hlavni mesto Australie" << endl;

            string mesto;

            cin >> mesto;

            if(mesto == "Canberra")
            {

                cout << "Blahopreju. Maturitu z anglictiny mate uspesne za sebou" << endl;


            }

            else  cout << "Smula zase v zari navidenou " << endl;

            cout << "Cestinu a anglictinu mas za sebou, ale cekejai te dalsi predmety " << endl;
            tecky();

            rozdeleni();

            cout << " Predstav si ze jsi na prakticke maturite z programka a tahle otazka rozhodne jestli udelas maturitu" << endl;
            tecky();

            cout << " Ucitel Nowak se te zepta na tuto otazku : Co to je string ???" << endl;

            string programko;

            cin >> programko;

            if(programko == "Retezec")
            {

                cout << "Blahopreju. Maturitu z anglictiny mate uspesne za sebou" << endl;


            }

            else  cout << "Smula zase v zari navidenou " << endl;

            cout << "Cestinu, anglictinu a programovani mas za sebou, ale cekejai te dalsi predmety " << endl;

            rozdeleni();

            cout << " Predstav si ze jsi na prakticke maturite z databazi a tahle otazka rozhodne jestli udelas maturitu" << endl;
            tecky();

            cout << " Ucitelka Revendova se te zepta na tuto otazku : Rekni mi jednu agregacni funkci  ???" << endl;

            string funkce;

            cin >> funkce;

            if(funkce == "AVG")
            {
                cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;
            }

            if(funkce == "COUNT")
            {
                cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;
            }

            if(funkce == "MAX")
            {

                cout << "Blahopreju. Maturitu z databti mate uspesne za sebou" << endl;
            }

            if(funkce == "MIN")
            {

                cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;

            }

            if(funkce == "SUM")
            {

                cout << "Blahopreju. Maturitu z databazi mate uspesne za sebou" << endl;

            }


            else  cout << "Smula zase v zari navidenou " << endl;







            rozdeleni();







            cout << "Ty jsi to vazne dokazal :) Ted jsi uspesnym absolventem prestizni skoly" << endl;


        }




        else
        {
            cout << "kontrola" << endl;
            tecky();
            sleep_for (1s);

            cout << "spatna odpoved, debile" << endl;
            if(vek>16) cout<< "mozna bys to mel uz vzdat" << endl;
            sleep_for (1s);

            cout <<"dalsi rok, dalsi pokus(nevim proc jsi nesel na ucnak, ngl)" << endl;
            vek++;

            rozdeleni ();

            goto PRIJMACKY;

        }


    }


    else if (volba1 != "ano" || volba1 != "ne")
    {

        tecky();
        sleep_for(1s);

        cout << "to jako neumis napsat ano nebo ne?" << endl;

        sleep_for(1s);

        cout << "zkusme to znovu" << endl;

        rozdeleni ();

        cout << endl;

        sleep_for(1s);

        goto ZACATEK;

    }







    // ZDRAVIM PITRIS, AT NEZAPOMENES, ZKUS TO DOMA POMOCI GOTO A NEJAK TO VYMYSLI


    return 0;

}





void rozdeleni ()
{

    cout << endl;

    cout << "---------------------------------------------" << endl;

    cout << endl;


}

void tecky ()
{

    for (int i = 0; i < 3; i++)
    {


        sleep_for(0.5s);

        cout << ". ";

    }
    cout << endl;

}
