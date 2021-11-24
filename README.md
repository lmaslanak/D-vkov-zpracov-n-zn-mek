Vytvořte takový program, který je schopen ze standardního vstupu postupně načítat bodové ohodnocení studenta v předmětu stejně tak, jak je v chodu na VŠB, tj.:

známka 1 odpovídá bodům v rozmezí 86 - 100
známka 2 odpovídá bodům v rozmezí 66 - 85
známka 3 odpovídá bodům v rozmezí 51 - 65
známka 4 odpovídá bodům v rozmezí 0 - 50
a výslednou známku bude vypisovat na standardní výstup. Pro každý řádek vstupu tedy tedy bude zapsán jeden řádek výstupu.

Pro načítání jednotlivých hodnot bodů použijte funkci scanf (popis ve skriptech). Vzhledem k tomu, že chceme načítat více hodnot, je nutné pro to využít cyklus. V tom případě tedy ideálně cyklus while (popis ve skriptech).

Využijte náš program ze cvičení pro realizaci tohoto úkolu. Pro ukončení načítání vstupu slouží hodnota, která je menší než 0, při které již program nic nezapíše na výstup a ukončí se.

Ošetřete také chybové zadání, kdy je na vstupu hodnota větší než 100 bodů. Pro takový vstup bude zapsána na výstup hodnota NA.

Ukázkový vstup:

66
65
86
85
100
101
30
4
0
51
50
-1
Ukázkový výstup:

2
3
1
2
1
NA
4
4
4
3
4
