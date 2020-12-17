#include "mainwindow.h"
#include <iostream>
#include <time.h>
#include <QDesktopServices>

std::vector<std::string> ketbetus = {"ad","ág","ál","ám","ár","ás","át","az","be","bő","bú","de","eb","ég","éj","ék","el","él","én","ép","ér","és","év","ez","fa","fő","fű","ha","hé","hó","hő","hű","íj","ím","ín","ír","is","ív","íz","jé","jó","ki","kő","la","le","lé","ló","ma","mi","mű","na","ne","ni","no","nő","ok","ők","ól","öl","ón","ön","őr","ős","öt","őt","öv","őz","rá","ró","se","sí","só","ti","tó","tő","tű","tv","új","ül","úm","un","úr","űr","us","út","üt","űz","vi","vő"};
std::vector<std::string> harombetus = {"ács","add","adj","adó","adu","ága","ágú","agy","ágy","aha","aki","alá","áld","alj","áll","ama","ami","apa","apó","ára","arc","árt","áru","árú","ásó","ász","azt","bab","báb","baj","báj","bak","bal","bál","bar","bár","övé","óvó","pác","pad","pál","pap","pár","pék","pép","per","pia","pír","pók","por","pót","póz","pro","púp","rab","rád","rag","rág","raj","rak","rák","rám","ráz","reá","rég","rém","rés","rét","rév","réz","rím","rög","rom","rőt","rúd","rúg","rum","rút","sál","sám","sáp","sár","sas","sav","sáv","seb","séf","sem","sík","sín","síp","sír","sok","sók","som","sor","sör","sos","sós","sót","sőt","sóz","súg","sül","sün","süt","szó","sző","szú","tag","tág","táj","tám","tan","táp","tar","tár","tat","táv","tea","tej","tél","tép","tér","tét","tíz","tok","tök","tol","töm","tor","tör","tőr","tót","tud","túl","bér","bír","bíz","bog","bőg","bók","bök","bor","bór","bőr","bot","búb","búg","bűn","bús","bűz","cár","cég","céh","cél","cet","cím","cső","dac","dal","dán","dél","dér","dia","díj","dió","dob","döf","dög","dől","dóm","dór","dúc","oki","old","öli","ölő","olt","ölt","oly","ont","önt","óra","őrá","orr","őrs","őrt","ör","ősi","ősz","óta","ott","óva","túr","tűr","tus","tűz","üde","üdv","ufó","úgy","ügy","ujj","ülj","ülő","ült","ünő","ura","úri","usa","üsd","üst","úti","üti","utó","ütő","űzi","űző","vad","vád","vág","vaj","váj","vak","vám","van","var","vár","vas","váz","véd","vég","vej","vél","vén","ver","vér","vés","vet","vét","víg","vis","vív","víz","vki","vmi","von","zab","zaj","záp","zár","zen","zöm","zrí","zug","zúg","zűr","zúz","dug","düh","dűl","dúr","dús","edd","edz","égi","ego","égő","egy","éji","ejt","éjt","eke","elé","éle","éli","elő","élő","élt","élű","elv","eme","emu","eón","epe","épp","éra","érc","éri","erő","érő","ért","érv","eső","est","ész","éti","éve","évi","evő","ezt","kos","köt","köz","kúp","kúr","kút","láb","lak","lám","lap","láp","lát","láz","léc","lég","lék","lel","len","lép","les","lét","lex","lóé","lóg","lök","lőn","lop","lúd","lúg","luk","mag","mai","máj","mák","mar","már","más","máz","méd","meg","még","méh","mén","mer","mér","mez","méz","míg","min","mit","mód","mól","mór","mos","nád","nap","nem","nép","név","néz","nőé","női","nők","nőn","nos","nős","nőt","nyű","öcs","oda","óda","odú","ojt","oka","oké","faj","fáj","fák","fal","far","fás","fát","fed","fej","fék","fel","fél","fém","fen","fér","fez","fia","fiú","fix","fog","fok","föl","fon","fos","főz","fúj","fúl","fül","fúr","fut","fűt","fux","fűz","gát","gaz","gáz","gél","gém","gén","gép","géz","gin","gnú","göb","góc","gőg","gól","gót","gőz","gyí","hab","had","hág","haj","háj","hal","hál","hám","has","hat","hát","ház","heg","héj","hét","hév","híd","híg","hím","hír","hit","hiú","hív","hoc","hód","hőé","hol","hon","hőn","hős","hoz","húg","huj","hűl","húr","hús","hűt","húz","ide","idő","iga","ige","így","ily","ima","íme","ing","int","íny","ion","írj","író","irt","írt","itt","ivó","ívű","izé","íze","ízt","ízű","jaj","jak","jár","jég","jel","jób","jód","jog","jók","jól","jón","jön","jós","jót","juh","jut","kád","kan","kán","kap","kar","kár","kas","kéj","kék","kel","kél","kém","ken","kén","kép","kér","kés","két","kéz","kín","kis","kit","köb","kóc","kód","köd","köp","kor","kór","kör","kőr"};
std::vector<std::string> negybetus = {"abba","ábra","acél","ácsi","adag","adás","adat","ádáz","adja","adná","adni","adóé","adok","adók","adom","adós","adót","adta","agár","ágat","ágon","ágra","agya","agyi","agyú","ágyú","áhít","ahol","ajak","ajkú","ajtó","ájul","akác","akad","akar","akár","akik","akit","akku","akna","akol","akóz","akta","akut","alak","alap","alba","alga","alig","alja","alku","álla","álld","allé","állj","álló","állt","alma","alól","alom","álom","alpi","alsó","alul","alva","alvó","amaz","amíg","amim","amin","amit","ámít","anna","anód","anya","anyu","apad","apád","apai","apát","apja","ápol","após","apró","apus","arab","árad","árak","áram","árán","arat","árat","árát","arca","arcú","ária","árny","árok","áron","árpa","arra","áruk","árul","árus","árut","árva","ásít","ásni","ászt","átad","átél","átér","átír","atka","átka","átló","átok","atom","átüt","atya","aura","autó","avas","avat","ázás","azaz","azok","azon","ázva","baba","bába","bábu","baja","bajt","baka","baki","bakó","bála","báli","bank","bánó","bánt","báró","báty","bead","becs","bécs","begy","beír","béka","béke","bele","belő","béna","benn","benő","bent","bérc","bért","betű","beüt","bézs","bibe","bibi","bika","bili","bíró","birs","bízó","blúz","boci","bódé","bőgő","bohó","bója","bojt","böjt","boka","bökd","bolt","boly","bonc","bont","bőre","bors","bort","bőrt","ború","bőrű","borz","bősz","brit","büfé","búgó","bújj","bújt","buké","bükk","buli","bumm","bűnt","búra","busz","buta","búza","cápa","cech","cécó","célt","célú","cent","cica","ciki","cikk","címe","cink","cipó","cipő","comb","copf","csáb","csaj","csak","csal","csap","csáp","csel","csen","csép","csér","csík","csín","csíp","csíz","csőd","csók","csór","csőr","csúf","csuk","cucc","cumi","dada","dagi","dáma","dara","daru","déli","port","popó","pózt","prém","prés","prím","prűd","puff","pufi","puha","pukk","pult","puma","püré","ráad","rács","ráér","rágó","ragu","rája","rajt","rajz","ránc","rang","ránt","ráró","ráta","ráül","ráüt","rázó","réce","redő","rege","régi","rejt","relé","réme","rend","reng","répa","rest","rést","rész","réti","revü","riad","rigó","ring","rizs","rogy","rója","rojt","róka","róla","roló","róma","rönk","ront","ropi","rost","rótt","rovó","rozs","ruci","rugó","rúgó","rügy","ruha","rúna","rúzs","sajt","sakk","sánc","sarc","sarj","sark","saru","satu","savó","sejt","séma","sért","sérv","séta","sicc","síel","siet","sikk","siló","sima","simi","síri","síró","skót","slag","sóba","sodó","soha","sója","soká","sokk","sora","sors","sort","sört","sose","sózó","srác","stég","suba","súgó","sújt","sülő","sült","súly","süné","sűrű","süsü","suta","süti","sütő","sváb","svéd","szab","szád","szag","száj","szak","szál","szám","szán","szár","száz","szed","széf","szeg","szék","szel","szél","szem","szén","szép","szer","szét","szia","szid","szíj","szín","szír","szít","szív","szög","szól","szór","szőr","szót","szűk","szül","szúr","szűr","tabu","tájt","talp","tana","tánc","tank","tanú","taps","táró","társ","tart","tárt","tata","tatu","távú","taxi","teás","teát","tedd","tégy","teje","teke","tele","teli","téli","telt","téma","tény","tépi","tépő","terc","térd","tere","térő","tért","terv","test","tesz","tető","tett","tetű","teve","téve","tevő","tied","tilt","tini","tipp","tóba","több","tóga","tőgy","tojó","toka","tőke","told","tőle","toll","toló","tölt","tömb","tömi","tönk","töri","törő","tört","torz","totó","töve","trén","trió","trón","tudó","tüdő","tufa","túli","tüll","tűnj","tűnő","túra","turf","túró","tűrő","tűrt","tusa","túsz","tuti","tütü","tűvé","tüze","tyűh","tyúk","uccu","ugar","ugat","üget","ugró","ugye","újat","újév","újít","ujja","újjá","ujjú","újra","ülep","ülés","üllő","ülsz","ülve","unió","unja","unom","urak","ural","uram","urán","üreg","üres","ürge","ürít","urna","úrnő","üröm","úrrá","ürül","úszó","üsző","utah","utak","utal","utál","után","utas","utat","útba","utca","üteg","ütem","ütés","útig","ütik","útja","utód","úton","ütős","útra","üveg","üzem","üzen","üzér","űzés","vadé","vágd","vágó","vagy","vágy","vájt","vaku","vall","váll","való","váló","vált","vápa","várd","váré","várj","váró","varr","várt","vasa","váza","vázú","vécé","vedd","védi","védő","vége","végi","végű","végy","véka","vele","véli","velő","vélt","véna","vére","veri","verő","vers","vert","vért","vese","véső","vesz","vész","veti","vető","vétó","vett","véve","vevő","vicc","visz","vita","vitt","vivő","vívó","vize","vízi","vizű","volt","vonó","vont","vonz","zacc","zaja","zajt","zakó","záró","zárt","zebu","zeke","zene","zeng","zéró","zöld","zöme","zóna","zord","zsák","zseb","zsír","zuga","zúgó","zuhé","zulu","zúzó"};
std::vector<std::string> hatbetus = {"ablaké","ablakú","ábránd","abrosz","acélos","acéloz","acetil","ácsolt","adagol","adalék","adandó","adását","adások","adatai","adatok","ádázul","adható","adódik","adogat","adósok","adóval","adózás","aduval","afelől","afféle","áfonya","afrika","agancs","ágasfa","ágazat","aggály","aggkor","aggódj","aggódó","agyára","agyarú","ágyban","ágyból","ágyelő","ágyfák","ágyfej","ágyhoz","ágynak","agyrém","ágyváz","áhítat","ajakír","ajánló","ajkait","ajkára","ajtóig","ajtóra","ájulás","akácfa","akarat","akarja","akárki","akármi","akarna","akarná","akarod","akarok","akarsz","akarta","akarva","akaszt","akciót","akiben","akiket","akinek","akiről","akivel","akként","akkord","akkori","aknász","alábbi","alagút","aláhúz","aláíró","aláírt","alakba","alakít","alakja","alakot","alakra","alakul","alámos","alanya","alanyi","alapít","alapja","alapkő","alapok","alapon","alapos","alapot","alapoz","alapra","alapul","alárak","alátét","alatta","alatti","alátűr","alávág","aláváj","aláver","alávet","albínó","álcázó","áldott","alfele","álharc","alibit","alifás","aligha","aljvíz","aljzat","alkáli","alkatú","alkony","alkotó","alkura","alkusz","alkuvó","állami","állása","állást","állású","állaté","állati","állhat","állító","álljon","állnak","állott","állunk","álomba","alpesi","alpont","álruha","alsóbb","alszik","általi","altató","aludni","aludva","alulra","alvadt","amatőr","amerre","amiatt","amiben","amiből","amiért","amikor","aminek","amiről","ámítás","amitől","amivel","ámulat","analóg","anémia","anglia","angolt","angyal","annyit","anorák","anyaga","anyagi","anyait","apadás","apához","apaság","apaszt","apátia","apától","apjára","ápolás","ápolja","aprófa","apróka","apropó","apróra","arabos","áradás","áradat","árakat","áramló","áramot","arányú","áraszt","aratás","árbocú","arcába","arcbőr","arccal","arckép","arcmás","áresés","armada","ármány","árnyal","árnyas","árnyat","árnyék","árokba","aromás","ártani","ártány","árthat","áruház","árulás","árulja","árusít","áruval","ásatás","ásítás","ásógép","ásónyi","ásvány","aszalt","aszály","aszott","asztal","asztma","átadás","átadja","átázás","átázik","átcsap","átélés","átemel","átesés","átesik","átevez","átfedő","átfogó","átfutó","áthajt","átható","átírás","átirat","átitat","átível","átjáró","átkelő","átküld","atlasz","atléta","átmegy","átmenő","átmérő","átnyom","átölel","átrakó","átrium","átszed","átszel","átszúr","átszűr","áttért","áttesz","áttölt","áttörő","áttört","átutal","átütés","átvágó","átvált","átvesz","átvett","átvéve","átvevő","átvisz","átvitt","átvivő","aukció","autóba","autóra","autóút","avatás","avatva","avulás","axióma","azonos","azután","babája","babbal","bábeli","babért","babona","babrál","bagázs","bagoly","bágyad","bajban","bajból","bajnok","bajusz","bakfis","baktat","bálába","bálázó","balett","balhés","balhét","baljós","balkon","ballag","ballon","bálozó","balról","bámész","bámuló","banánt","bánata","bankár","bankba","bankot","bantam","bántja","bányát","banzáj","barack","barakk","bárány","baráti","barbár","bárdol","bárhol","barika","bárkit","bármit","barnás","barokk","bástya","bátran","bauxit","bazalt","beadás","beadja","beakad","beáraz","beárul","beássa","beavat","beázik","becéző","becsap","becses","becsíp","becslő","becsuk","becsül","becsüs","bedőlt","bedönt","beékel","beépít","beérni","beesés","beesik","beetet","beevez","befagy","befelé","befest","befogó","beforr","befőtt","befutó","befűzi","bégető","begyűr","behajt","beható","behint","behívó","behord","behúzó","beidéz","beírás","beível","bejövő","békéje","békítő","béklyó","beköti","bekötő","beküld","beléje","bélelt","belépő","bélést","beleun","belőle","belövi","beltag","belüli","belvíz","bélyeg","bemárt","bemegy","bemenő","bement","bemérő","bemért","bemész","bemond","benőtt","bénult","benyom","benzin","benzol","beoltó","beömlő","beoson","beoszt","bérelt","bérenc","bérház","bérlet","beront","berreg","besózó","besúgó","beszed","beszéd","beszeg","beszél","beszív","beszól","beszór","beszúr","betart","betesz","betett","betevő","betilt","betold","betoló","betölt","betömi","betont","betöri","betörő","betűje","betűző","betyár","beugró","beutal","beutaz","beütés","bevágó","bevall","bevált","bevarr","bevesz","beveti","bevett","bevisz","bevonó","bevont","bezárt","biankó","biblia","bicegő","bicska","billeg","billog","bimbót","bírája","bíráló","bírják","birkát","bírság","bírtam","birtok","bitang","bivaly","bizarr","bizony","biztat","bíztat","biztos","bízzák","bízzál","blézer","blokád","bóbita","bocsát","bodega","bódító","bodros","bódult","bogara","bogáré","bőgése","boglya","bögöly","bögyös","bojler","böjtfű","böjtöl","bojtos","bőkezű","bokros","bölcső","boldog","bölény","bolgár","bolhát","bólint","bolond","boltív","boltja","boltos","boltot","boltoz","bolyfa","bolygó","bombáé","bombák","bombát"};
std::vector<std::string> hetbetus = {"ablakon","ablakos","ablakot","ábrázat","ábrázol","abroncs","abszurd","acélból","acéllal","ácsfúró","ácsorog","ácsszeg","adagoló","adakozó","adapter","adásban","ádázság","addigra","additív","adódott","adogató","adókkal","adomány","adósság","ágacska","ágaktól","agancsú","agárhas","ágazata","ágazati","ágcsonk","aggaszt","aggkori","aggódás","aggódik","aggódni","aggódót","aggódva","agyában","ágyában","ágyából","agyagos","ágyazás","ágyazat","ágynemű","ágyrugó","agysejt","ágyúrés","ágyúszó","ágyútűz","ágyúval","ágyúzás","ahogyan","ahonnan","ajakról","ajándék","ajánlás","ajánlat","ajánlja","ajánlva","ájtatos","ajtóból","ajtódúc","ajtóról","ajtóval","ájulási","ájultan","akadály","akadozó","akarati","akaratú","akárhol","akárkit","akarlak","akármit","akarnok","akartam","akasztó","akcióba","akiknek","akikről","akkorra","aknásít","aknazár","akolnyi","akrilát","aktázás","aktívák","aktivál","aláássa","alabárd","aláesik","alagcső","alagsor","aláírás","alakban","alakító","alakját","alakmás","alakozó","alakult","alakúvá","alakvas","alakzat","alantas","alapbér","alapelv","alapfal","alapfém","alapfok","alapító","alapján","alapját","alaplap","alapozó","alapszó","alapuló","alapzat","álarcát","álarcos","álarcot","álarcoz","alászór","alátart","alávaló","aláveti","albánia","albérlő","álborda","álcázás","áldomás","áldozás","áldozat","áldozik","alelnök","algebra","algéria","álhűség","aljasul","alkalma","alkalmi","alkalom","alkímia","alkohol","alkonyi","alkotás","alkotta","alkuban","álkulcs","alkuvás","államok","államot","állandó","állapít","állapot","állását","állásba","állások","állásra","állatka","állatok","állatot","állatöv","állítás","állítja","állítsd","állítva","állókép","állomás","állóvíz","állvány","álmában","álmából","almabor","álmodik","álmokat","álmosan","álnéven","álnevet","álnokul","álomban","álomkór","alomnyi","álomtól","alperes","álruhás","pöfékel","pogácsa","poharak","poharat","pohárba","pohárka","pókháló","pókhasú","polgári","polinom","políroz","politúr","poloska","pólusai","pompano","pontban","pontján","pontozó","pontról","pórázon","pórázra","porcogó","porfogó","pörgési","porítás","pörkölő","pörkölt","porladó","pörögni","porolás","poronty","porosan","porózus","porvédő","postára","posvány","poszáta","poszméh","poszter","pótadag","pótbíró","pótkávé","pótlási","pótolja","pótszer","pottyan","pöttyös","pótülés","potyázó","pötyögő","pozíció","pozitív","pózolás","pózolva","pozsgás","prémmel","préselt","préslap","próbakő","próbáld","próbálj","próbált","próbára","próbaút","próféta","program","protont","psziché","puffadt","puffanó","püfölés","puhaság","pukedli","pukkanó","pukkant","pulóver","pumpája","pumpoló","puncsos","pünkösd","pupilla","púpossá","purgáló","puritán","püspöki","pusztán","pusztít","pusztul","puttony","rábámul","rábízza","rabjává","rablást","rablott","ráborít","rabruha","rácáfol","ráccsal","raccsol","rácéloz","rácskör","rádiusz","rádumál","ráébred","ráenged","ráfázol","rafinőr","ráfizet","ragadja","ragadós","rágalom","ragaszt","rágcsál","rágódik","ragozás","ragyogó","ráharap","ráhímez","ráhozza","ráhúzás","ráígérő","ráismer","rajongó","rajtaüt","rajtgép","rajthoz","rajzlap","rajzoló","rajzolt","rajzóra","rákerül","rakétáé","rákfogó","rákháló","rákiált","rakodás","rakodik","rákolló","rakonca","rákötöz","rakpart","raksúly","raktára","raktári","raktárt","rámutat","ráncait","ráncolt","randevú","rángató","rangban","rangsor","rangtól","rántani","ráolvas","ráragad","rárakás","rárepül","rárohan","ráruház","rászáll","rátalál","rátámad","rátapad","rátapos","rátarti","ráterel","ráteszi","rátétel","rátörés","ráugrik","ráuszít","rávarrt","ravaszt","lehulló","lehűtés","lehúzás","lehúzza","leírása","lejárat","lejárja","lejárta","lejjebb","lejtése","lejtésű","lekapar","lekésik","lekéste","lekezel","lekísér","lekókad","lekopás","lekopik","lekopog","leköröz","lekötés","lekötni","lelegel","lélegző","lelépés","lelkébe","lelkére","lelkész","lelógás","leltári","lemarad","lemarat","lemásol","lemérés","lemerít","lemerül","lemetsz","lemezel","lemezes","lemezke","lemondó","lemosás","lencsés","lenézés","lengése","lengyel","lenipar","lenolaj","lényege","lényegi","lenyeli","lenyírt","leöblít","leolvas","leomlik","leöntés","leopárd","lépcsőn","lépcsős","lépcsőz","lepedék","lepereg","lépések","lépését","lépésre","lepihen","lepipál","leporol","lépsejt","lépteit","leragad","lerakás","lerakat","lerakja","lerázni","lereped","lerohan","lesegít","leshely","lesimít","lesújtó","lesülés","lesúrol","leszáll","leszedi","leszegi","lesznek","leszóló","leszúrt","letagad","letakar","letámad","letapos","letarol","leteker","letelik","leteszi","letétbe","letétel","letevés","létezés","létezik","letipor","letolás","letörés","letörik","letörli","letöröl","létszám","letusol","leugrás","leugrik","leültem","leültet","leúszik","leütött","levágás","levágja","levakar","leválás","leválik","levegőn","levegős","levegőt","leveled","levelek","levélen","leveles","levelet","levelez","levélke","levélre","levenni","leveses","leveszi","levétel","levetés","levevés","levezet","levonás","levonat","levőnek","levonja","levonul","levonva","lexikon","lezajló","lezárás","lezárul","lezárva","lézengő","lezúdít","lezuhan","libabőr","libahús","libegés","licitál","licitet","lievrit","lihegve","listája","listára","lisztes","lóbálás","lobbant","lobogás","lobogók","lobogót","lobogva","loccsan","locsogó","locsoló","lódítás","lődörög","lófarok","lógatja","logikai","logikus","lóháton","lojális","lőjáték","lokátor","lökdösi","lökdöss","lökőerő","lökőkar"};
std::vector<std::string> nyolcbetus = {"adósságé","adóteher","adottság","agancsát","ágaskodó","agavébor","aggályai","aggasztó","aggódjál","ágvessző","agyafúrt","agyagáru","agyaggal","agyagpép","ágysátor","ágytartó","ágyútalp","áhítatos","áhítatot","áhítozik","ajakfény","ajakrúzs","ajánlási","ajánlott","ajtórács","ajtószeg","ajtózáró","ájuldozó","ájultság","akadálya","akadályt","akadémia","akadozik","akadozva","akaratát","akaratod","akaratos","akaratot","akárcsak","akárhány","akárhogy","akárhova","akasztás","akasztós","akcentus","akkorára","akkortól","aknafúró","aknamező","aknarács","aknarakó","aknaszáj","aknaszén","aknavető","akrobata","aktuális","akvarell","akvárium","aláaknáz","alábukás","alábukik","alacsony","aládúcol","aláfalaz","alagutat","alakiság","alakítás","alakítja","alakjára","alakozás","alakulás","alakulat","alakverő","alámerít","alámerül","aláosztó","alapárok","alapfokú","alaphang","alapítás","alapjául","alapokra","alaposan","alapozás","alapozót","alappont","alaprács","alaprajz","alapszik","alapszín","alaptőke","alapvető","alárésel","alászáll","alászánt","alattunk","alávetés","alázatos","albániai","albérlet","albérlőt","álcázott","algebrai","algériai","alighogy","aljasság","alkalmas","alkalmat","alkalmaz","alkalmon","alkonyat","alkotása","alkotnak","alkuszik","államból","államfői","állapota","állapotú","állásába","állásban","állásból","állatból","állatian","állatias","állatkár","állatság","állattan","álldogál","allergia","állhatja","állhatom","állítani","állítása","állítást","állítják","állított","állóhajó","állóhely","állomány","állomási","állomást","almaecet","almamust","álmatlan","álmodozó","álmodtak","álmosító","álmosság","álnokság","alsóéves","alsónemű","alsóruha","alszanak","alteregó","altiszti","aludttej","alufólia","alulinak","aluljáró","alvajáró","alváshoz","alvással","alvilági","alvóhely","ambíciói","amellett","amelyben","amennyit","amerikai","ametiszt","amikorra","ámulatba","analizál","analízis","analógia","jégártól","jégdarab","jéghideg","jégkocka","jégmadár","jégpálya","jégtábla","jégvirág","jegybank","jegyében","jegyeket","jegyesek","jegyezve","jegyezze","jegyüzér","jegyzéke","jegyzési","jegyzett","jelenése","jelenkor","jelenleg","jelenlét","jelennek","jelenség","jelentek","jelentés","jelentős","jelentse","jelképes","jelképez","jelleget","jellemez","jellemző","jelmezes","jelölési","jelöltet","jelöltre","jelvénye","jelzálog","jelzőkar","jelzőtűz","jóakarat","jóakaróm","jobbulás","jódlizás","jódlizik","jóformán","jogaiban","jogaihoz","jogainak","jogcímen","jogigény","jogkörét","jogosító","jogosság","jogosult","jogsértő","jogszerű","jogtalan","jogtudós","jókedvét","jókedvre","jólétben","jóllakat","jóllakik","jóllakni","jóllehet","jómódban","jómodorú","jótállás","jótékony","jottányi","jöttment","jóvágású","jóváhagy","jóváírás","jóvátesz","jóvátevő","jövendöl","jövendőt","jövevény","jövőbeli","józanság","jutalmat","jutalmát","jutalmaz","jutottak","juttatás","juttatja","kabáthoz","kabátját","kabátujj","kábelkés","kábultan","kacérság","kacsázás","kacsázik","kakaóbab","kakassal","kakukkfű","kakukkol","kalandja","kalandor","kalandos","kalapács","kalapált","kalapban","kalapját","kalappal","kalászba","kalászol","kalászos","kalauzol","kalibrál","kalimpál","kalkulál","kálvária","kályhába","kályhára","kamatláb","kamatozó","kaméleon","kampóval","kanalazó","kanállal","kanálnyi","kandalló","kandikál","kandíroz","kánikula","kankalin","kankutya","kannányi","kanyargó","kanyarog","kanyarót","kaotikus","kapásból","kapcsolj","kapcsoló","kapcsolt","kapitány","kapkodás","kapkodja","kapkodva","káposzta","káprázat","káprázik","kapszula","káptalan","kapucnis","karalábé","karámban","karambol","karamell","karámmal","karantén","karbonát","karcolás","karcolat","karcsúvá","kardalos","kardfogú","kardgomb","kardhegy","kardigán","kardkötő","kardotok","kardszíj","karfával","karhossz","kárhozat","kárigény","karikába","karimájú","karjaiba","karjával","karjelző","karnevál","karperec","kárpitos","kárpitoz","kárpótol","megbánás","megbánja","megbékít","megbénít","megbírál","megbízás","megbízik","megbízni","megbotló","megbújik","megbukás","megbukik","megbúvik","megbűvöl","megcáfol","megcéloz","megcsalt","megcsípi","megdagad","megdarál","megdobál","megdobás","megdőlés","megdönti","megégett","megelőzi","megelőző","megélünk","megemelt","megemlít","megenged","megépítő","megérint","megerjed","megérjük","megérlel","megértés","megértet","megértik","megérzés","megesett","megesket","megeszem","megeszik","megfakít","megfakul","megfarag","megfázás","megfázik","megfejel","megfejtő","megfékez","megfelel","megfelez","megfizet","megfogad","megfogan","megfogás","megfogja","megfoszt","megfújás","megfújja","meggátló","meggátol","meggyőző","meggyújt","meghagyó","meghajít","meghajol","meghalad","meghámoz","megharap","meghasad","meghívás","meghízik","meghódít","meghozza","meghűlés","meghúzás","meghúzni","meghúzva","meghúzza","megígért","megigézi","megihlet","megillet","megindít","megindul","megingás","megingat","megintés","megismer","megissza","megiszik","megízlel","megjárat","megjárja","megjavít","megjavul","megjelöl","megjósol","megkapja","megkapni","megkapod","megkavar","megkenés","megkeres","megkerít","megkerül","megkever","megkezdi","megkímél","megkíván","megkopik","megkötés","megkötöz","megkövez","megkövül","meglapul","meglátod","meglátom","meglazít","meglazul","meglékel","meglenni","meglepve","meglóbál","meglógás","meglógva","meglövés","megmarad","megmásít","megmenti","megmentő","megmérés","megmerít","megmetsz","megmossa","megmotoz","megmutat","megművel","megnémul","megnevez","megnősül","megnövel","megnyeri","megnyerő","megnyitó","megnyúlt","megoldás","megoldoz","megolvad","megöntöz","megőrjít","megőrült","megőrzés","megőszít","megosztó","megőszül","mégpedig","megpihen","megpirul","megpofoz","megpuhít","megpuhul","megragad","megrakás","megrakja","megrázás","megrázza","megreked","megremeg","megrémít","megrémül","megreped","megrohan","megrovás","megsegít","megsérti","megsérül","megsirat","megsúrol","megszáll","megszedi","megszegi","megszegő","megtagad","megtalál","megtámad","megtanít"};
std::vector<std::string> kilencbetus = {"acélozott","acélsisak","acélvázas","ácsfűrész","ácskapocs","adásvétel","adatközlő","adatokkal","admirális","adófizető","adogatási","adogatott","adományoz","adómentes","adoptálás","adóslevél","adósságát","adósságot","adószedés","adótorony","adrenalin","affektáló","affektált","affinitás","agancságú","agarakkal","ágaskodás","ágaskodik","aggályait","aggasztja","agglegény","aggodalom","agresszió","agresszív","agresszor","ágykárpit","ágytakaró","agytröszt","ágyúállás","ágyúbronz","ágyúfajta","ágyúgolyó","ágyúlövés","ágyúmoraj","ágyútüzet","ajándékba","ajándékoz","ajánlanod","ajánlatos","ajánlatot","ajánlható","ájtatosan","ajtófélfa","ajtófülke","ajtókeret","ajtónálló","ajtósarok","ajtótábla","akadályai","akadályba","akadályok","akadályon","akadályoz","akadémiai","akaraterő","akaratlan","akarattal","akárkinek","akaródzik","akaródzva","aktatáska","aktivista","aktivitás","aktuálisa","akusztika","akvamarin","akvizíció","alábbhagy","alábbvaló","alábecsül","aláfestés","alakjában","alaktalan","alakulása","alakulnak","alámerítő","alamizsna","alanyeset","alapállás","alapanyag","alapelvek","alapeszme","alapjában","alapjaira","alaplemez","alaposság","alapozási","alapréteg","alapszint","alapszínt","alaptalaj","alaptalan","alaptárgy","alaptétel","alapvágat","alárendel","alarmíroz","alászállt","alátéttel","alátétvas","alattomos","alattvaló","alázúduló","albatrosz","albérleti","álcajáték","alcsoport","áldozatok","áldozatot","áldozatra","áldozatul","áldoztató","alezredes","alfejezet","alhadnagy","alighanem","aljassága","alkalmazó","alkalomra","alkatrész","alkimista","alkoholos","alkotmány","alkudozás","alkudozik","álkulcsos","alkuszdíj","alkuszság","állambeli","államilag","államosít","állandóan","állandóvá","állapodik","állapotát","állapotba","állapotos","állásából","állásához","állásáról","állásától","álláshely","állásokra","álláspont","állatfogó","állatkert","állatmese","állattani","allegória","allergiás","alligátor","állítását","alliterál","állítható","állítmány","állítólag","állkapcsa","állkapcsú","állkapocs","állócsiga","állófogas","állóképes","állólétra","állományú","állomáson","állómérce","alloméria","gazdasági","gazdátlan","gázharang","gázkályha","gemkapocs","generáció","generálás","generáloz","generátor","generikus","genetikus","geometria","gépasztal","gépegység","gépesítés","gépezetet","gépfűrész","gépkenőcs","gépkezelő","gépműhely","géppuskás","géppuskáz","géprészek","gépselyem","gépszalag","gépszínbe","gépvezető","gerebenez","gereblyéz","gerendája","gerendely","gerincagy","gerjesztő","gesztenye","gilisztás","gilisztát","gimnázium","gipszelve","gipszöntő","giroszkóp","göcsörtös","gödröcske","gőgicsélő","golflabda","golfpálya","golyóálló","golyócska","golyófogó","gombaféle","gombászik","gömbászka","gömböcske","gombolyag","gombolyít","gömbölyít","gombszemű","gondatlan","gondjaiba","gondjaira","gondnoknő","gondokkal","gondolata","gondolaté","gondolják","gondolnak","gondoltam","göndörítő","göndörödő","gondosság","gondozása","gondozónő","gondozott","gondtalan","göngyöleg","göngyölít","gonoszság","görbékkel","görbített","görbületi","görcsösen","gördeszka","göröngyök","göröngyös","görvélyes","gőzerővel","gőzfátyol","gőznyomás","gőzölögni","gőzpuffer","grafikont","grafitpor","gramofont","gránáttűz","gratuláló","gravírozó","gregorián","grillsütő","grimaszol","grimbuszt","gumibelső","gumibetét","gumibugyi","gumicucli","gumicukor","gumiember","gumikerék","gumikötél","gumiperem","gumipólya","gumisarok","gumiszerű","gumitalpú","gumitömlő","gúnyolódó","gurítható","gyakorító","gyakorlás","gyakorlat","gyakornok","gyaloghíd","gyaloglás","gyalogság","gyalogtőr","gyámfával","gyámkodás","gyanakvás","gyanított","gyanúsító","gyanútlan","gyapjúáru","gyarapodó","gyarlóság","gyarmatok","gyarmatos","gyártelep","gyártmány","gyászének","gyászolva","gyászosan","gyászruha","gyékényen","gyémántot","gyengéden","gyengének","gyengeség","gyengítés","gyengülés","gyeptégla","gyerekdal","gyerekded","gyerekkor","gyermekei","gyermekek","gyermekes","gyermeket","gyermekre","gyermeteg","gyógyítás","gyógyszer","gyógyulás","gyökérben","gyökérdús","gyökerére","gyökerező","gyökvonás","gyomlálás","gyomorral","gyomorsav","gyomverte","gyöngéden","gyöngeség","gyöngyléc","gyöngyöző","gyöngysor","gyönyörök","gyorsabbá","gyorsaság","gyorsbüfé","gyorsírás","művésznév","nagybácsi","nagybérlő","nagybetűs","nagydarab","nagydobra","nagydolog","nagygazda","nagyhangú","nagyjában","nagyjából","nagykabát","nagykendő","nagykövet","nagykutya","nagylábon","nagylelkű","nagylemez","nagymérvű","nagyobbik","nagyobbít","nagyobbra","nagyopera","nagyrészt","nagyságát","nagyságok","nagyszájú","nagyszámú","nagyszemű","nagyszerű","nagyterem","nagytucat","nagyváros","nagyzolás","napfáklya","napfényes","napfényre","napirendi","napkorona","napközben","napnyugta","naprakész","napszámba","napszámos","narancslé","navigátor","nedvesség","nedvszívó","nefelejcs","negatívon","negatívum","negédesen","négyajtós","negyedévi","negyedkor","negyedóra","négyesben","négyjegyű","négykezes","négyszemű","négyszögű","negyvenöt","négyzeten","négyzetes","négyzetre","nehezebbé","nehezedik","nehezemre","nehézfejű","nehézipar","nehézségi","nehézsúly","neheztelő","nekiestek","nekifogás","nekifutás","nekihevül","nekilódul","nekirohan","nekitámad","nekiugrik","nekivadul","nélkülöző","némajáték","nemesfémé","nemesítés","nemezelés","nemsokára","nemzetség","népességi","népiesség","népítélet","népnyelvi","népszónok","néptribün","népvagyon","nesztelen","nevelhető","nevelőapa","nevettető","nevezetes","nevezhető","névjegyét","névkártya","névmutató","névsorban","névünnepe","nézeteket","nézővonal","normálisa","nőtlenség","növekedés","növekmény","növekszik","növényevő","növénytan","növényzet","nukleáció","nukleáris","nullapont","numerikus","nyájasság","nyakasság","nyakbőség","nyakfájás","nyakigláb","nyakkendő","nyakleves","nyakszirt","nyárközép","nyavalyog","nyegleség","nyekergés","nyekerget","nyeletlen","nyelvével","nyelvezet","nyelvtani","nyelvtörő","nyeregből","nyeregváz","nyeremény","nyeretlen","nyergesen","nyersbőrt","nyerseség","nyersolaj","nyertesek","nyesőolló","nyikkanás","nyikorgás","nyikorgós","nyilallás","nyílhegyé","nyilvánít","nyilvános","nyilvánul","nyílzápor","nyíratlan","nyirkosan","nyolcadik","nyolcéves","nyolcórás","nyolcszög","nyomásnak","nyomasztó","nyomatéki","nyomdában"};
std::vector<std::string> tizbetus = {"ablakfélfa","ablakfülke","ablakkeret","ablaktábla","ablaktalan","ablaktörlő","abnormális","abrakoltat","ábrándokat","ábrándozás","ábrándozik","ábrándozva","ábrázolása","acélszalag","adagológép","adagonként","adalékolás","ádámcsutka","adásszünet","adóállomás","adóantenna","adogatónál","adóhivatal","adókivetés","adományozó","adósságban","adottságok","affektálás","affektálva","agancshegy","aggályosan","aggasztóan","aggodalmas","aggodalmat","aggregátum","agyafúrtan","agyagedény","agyagkorsó","agyagtálka","ágyállvány","ágyfüggöny","ágyúcsövet","ágyúdörgés","ágyúlövést","ágyúnaszád","ágyútaliga","ágyúzástan","áhítatosan","ajánlással","ajánlkozik","ájtatosság","ajtónyílás","ajtóretesz","ajtószárny","akadályozó","akadémikus","akaratának","akaratosan","akárhányan","akárhogyan","akármelyik","akármiként","akármilyen","akkreditál","aknakereső","aknakutató","aknataposó","aknatorony","akrobatika","aktuálisan","akusztikai","akusztikus","alabástrom","alacsonyak","alacsonyan","alacsonyra","aládúcolás","aláfestést","alagcsövez","alagútfúró","alágyújtós","aláírással","alájátszik","alakítható","alakoskodó","alakulatok","alakulatot","alámerítés","alámerülés","aláművelés","alantasabb","alanyeseti","alapanyaga","alapdeszka","alapelemek","alapfestés","alapítvány","alapjaiban","alappillér","alappontot","alapposztó","alaprajzot","alapszövet","alapvetően","alapvizsga","alapvonala","álarcosbál","alárendelt","alátámaszt","alattomban","alávalóság","alázatosan","albérletbe","albérlőket","álcázottan","áldozatára","alépítmény","algoritmus","alhadnagyi","alkalmából","alkalmasan","alkalmassá","alkalmával","alkalmazás","alkalmilag","alkalomból","alkalomhoz","alkalommal","alkatrésze","alkoholból","alkoholról","alkoholtól","alkonyodik","alkotóelem","alkotórész","államcsíny","államférfi","államügyek","állandóság","állandósít","állapodott","állapodtam","állapotban","álláscsere","állásokkal","állástalan","állatfajta","állatkodik","állatnyúzó","állatocska","állatorvos","állatóvoda","állatvilág","állhatatos","alliteráló","állítmányi","állócsónak","állóeszköz","állóhullám","állományba","állomásozó","állványozó","állványzat","almaborból","almabornak","almadaráló","almakompót","álokoskodó","álomország","alpinizmus","alsóháznak","álszentség","altatószer","alternatív","alulhívott","alultáplál","aluszékony","ambiciózus","amennyiben","ámokfutást","ámulatomra","anagrammás","analfabéta","analitikai","analógiája","anekdotázó","anemosztát","angolbarát","angolkóros","angolvörös","angyalarcú","angyalcápa"};

std::vector< std::vector<std::string> > gSzotar = {ketbetus, harombetus, negybetus, hatbetus, hetbetus, nyolcbetus, kilencbetus};


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    m_alphabet_widget = new AlphabetWidget(this);

    m_amount = 2;
    m_score_limit = 50;

    m_button_next = new QPushButton("Next", this);
    connect(m_button_next, SIGNAL (clicked()), this, SLOT (getNextExcercise()));

    m_score_label = new QLabel("Score: ", this);

    m_alphabet = new QLabel("", this);
    QFont f( "Arial", 30, QFont::Bold);
    m_alphabet->setFont(f);

    m_score_text = new QLabel("0", this);
    m_score = 0;

    m_prev_idx.resize(m_amount);
    m_prev_idx_b.resize(m_amount);

    createAlphabetGroubBox();

    fillContainers();
    QHBoxLayout *widgetLayout = new QHBoxLayout;
    widgetLayout->addWidget(m_alphabet_widget);

    QHBoxLayout *controlLayout = new QHBoxLayout;
    controlLayout->addStretch();

    m_randomLabel = new QLabel("Random:", this);
    m_randomCehckbox = new QCheckBox;

    QGridLayout *controlGrid = new QGridLayout;
    controlGrid->addWidget(m_alphabet, 0,0);
    controlGrid->addWidget(m_button_next,1,0);
    controlGrid->addWidget(m_score_label, 2,0);
    controlGrid->addWidget(m_score_text,2,1);
    controlGrid->addWidget(m_randomLabel, 3,0);
    controlGrid->addWidget(m_randomCehckbox,3,1);
    controlLayout->addLayout(controlGrid);

    QHBoxLayout *alphabetLayout = new QHBoxLayout;
    alphabetLayout->addWidget(alphabetGroupBox,Qt::AlignRight);

    QGridLayout *mainLayout = new QGridLayout;
    mainLayout->addLayout(widgetLayout,0,0);
    mainLayout->addLayout(controlLayout,1,0);
    mainLayout->addLayout(alphabetLayout,1,1);

    auto central = new QWidget;
    central->setLayout(mainLayout);
    setCentralWidget(central);

    setWindowTitle(tr("Eszter olvasoja"));

    getNextExcercise();

}

MainWindow::~MainWindow()
{

}

void MainWindow::createAlphabetGroubBox()
{
    alphabetGroupBox = new QGroupBox(tr("Select the alphabets"));
    a = createCheckBox(tr("a"));
    aa = createCheckBox(tr("á"));
    b = createCheckBox(tr("b"));
    c = createCheckBox(tr("c"));
    cs = createCheckBox(tr("cs"));
    d = createCheckBox(tr("d"));
    dz = createCheckBox(tr("dz"));
    dzs = createCheckBox(tr("dzs"));
    e = createCheckBox(tr("e"));
    ee = createCheckBox(tr("é"));
    f = createCheckBox(tr("f"));
    g = createCheckBox(tr("g"));
    gy = createCheckBox(tr("gy"));
    h = createCheckBox(tr("h"));
    i = createCheckBox(tr("i"));
    ii = createCheckBox(tr("í"));
    j = createCheckBox(tr("j"));
    k = createCheckBox(tr("k"));
    l = createCheckBox(tr("l"));
    ly = createCheckBox(tr("ly"));
    m = createCheckBox(tr("m"));
    n = createCheckBox(tr("n"));
    ny = createCheckBox(tr("ny"));
    o = createCheckBox(tr("o"));
    oo = createCheckBox(tr("ó"));
    ooo = createCheckBox(tr("ö"));
    oooo = createCheckBox(tr("ő"));
    p = createCheckBox(tr("p"));
    r = createCheckBox(tr("r"));
    s = createCheckBox(tr("s"));
    sz = createCheckBox(tr("sz"));
    t = createCheckBox(tr("t"));
    ty = createCheckBox(tr("ty"));
    u = createCheckBox(tr("u"));
    uu = createCheckBox(tr("ú"));
    uuu = createCheckBox(tr("ü"));
    uuuu = createCheckBox(tr("ű"));
    v = createCheckBox(tr("v"));
    z = createCheckBox(tr("z"));
    zs = createCheckBox(tr("zs"));

    a->setChecked(true);
    m->setChecked(true);
    s->setChecked(true);
    e->setChecked(true);
    ee->setChecked(true);
    i->setChecked(true);
    ii->setChecked(true);
    t->setChecked(true);
    l->setChecked(true);
    v->setChecked(true);
    o->setChecked(true);
    oo->setChecked(true);
    p->setChecked(true);
    z->setChecked(true);
    r->setChecked(true);
    k->setChecked(true);
    h->setChecked(true);

    QGridLayout *layout = new QGridLayout;

    layout->addWidget(a,    0, 0);
    layout->addWidget(aa,   1, 0);
    layout->addWidget(b,    2, 0);
    layout->addWidget(c,    3, 0);
    layout->addWidget(cs,   4, 0);
    layout->addWidget(d,    5, 0);
    layout->addWidget(dz,   6, 0);
    layout->addWidget(dzs,  7, 0);
    layout->addWidget(e,    8, 0);
    layout->addWidget(ee,   9, 0);
    layout->addWidget(f,    0, 1);
    layout->addWidget(g,    1, 1);
    layout->addWidget(gy,   2, 1);
    layout->addWidget(h,    3, 1);
    layout->addWidget(i,    4, 1);
    layout->addWidget(ii,   5, 1);
    layout->addWidget(j,    6, 1);
    layout->addWidget(k,    7, 1);
    layout->addWidget(l,    8, 1);
    layout->addWidget(ly,   9, 1);
    layout->addWidget(m,    0, 2);
    layout->addWidget(n,    1, 2);
    layout->addWidget(ny,   2, 2);
    layout->addWidget(o,    3, 2);
    layout->addWidget(oo,   4, 2);
    layout->addWidget(ooo,  5, 2);
    layout->addWidget(oooo, 6, 2);
    layout->addWidget(p,    7, 2);
    layout->addWidget(r,    8, 2);
    layout->addWidget(s,    9, 2);
    layout->addWidget(sz,   0, 3);
    layout->addWidget(t,    1, 3);
    layout->addWidget(ty,   2, 3);
    layout->addWidget(u,    3, 3);
    layout->addWidget(uu,   4, 3);
    layout->addWidget(uuu,  5, 3);
    layout->addWidget(uuuu, 6, 3);
    layout->addWidget(v,    7, 3);
    layout->addWidget(z,    8, 3);
    layout->addWidget(zs,   9, 3);


    alphabetGroupBox->setLayout(layout);

}

void MainWindow::fillContainers()
{
    m_alphabet_cb_list.clear();
    m_alphabet_cb_list_b.clear();
    m_alphabet_cb_list.push_back(a);
    m_alphabet_cb_list.push_back(aa  );
    m_alphabet_cb_list_b.push_back(b   );
    m_alphabet_cb_list_b.push_back(c   );
    m_alphabet_cb_list_b.push_back(cs  );
    m_alphabet_cb_list_b.push_back(d   );
    m_alphabet_cb_list_b.push_back(dz  );
    m_alphabet_cb_list_b.push_back(dzs );
    m_alphabet_cb_list.push_back(e   );
    m_alphabet_cb_list.push_back(ee  );
    m_alphabet_cb_list_b.push_back(f   );
    m_alphabet_cb_list_b.push_back(g   );
    m_alphabet_cb_list_b.push_back(gy  );
    m_alphabet_cb_list_b.push_back(h   );
    m_alphabet_cb_list.push_back(i   );
    m_alphabet_cb_list.push_back(ii  );
    m_alphabet_cb_list_b.push_back(j   );
    m_alphabet_cb_list_b.push_back(k   );
    m_alphabet_cb_list_b.push_back(l   );
    m_alphabet_cb_list_b.push_back(ly  );
    m_alphabet_cb_list_b.push_back(m   );
    m_alphabet_cb_list_b.push_back(n   );
    m_alphabet_cb_list_b.push_back(ny  );
    m_alphabet_cb_list.push_back(o   );
    m_alphabet_cb_list.push_back(oo  );
    m_alphabet_cb_list.push_back(ooo );
    m_alphabet_cb_list.push_back(oooo);
    m_alphabet_cb_list_b.push_back(p   );
    m_alphabet_cb_list_b.push_back(r   );
    m_alphabet_cb_list_b.push_back(s   );
    m_alphabet_cb_list_b.push_back(sz  );
    m_alphabet_cb_list_b.push_back(t   );
    m_alphabet_cb_list_b.push_back(ty  );
    m_alphabet_cb_list.push_back(u   );
    m_alphabet_cb_list.push_back(uu  );
    m_alphabet_cb_list.push_back(uuu );
    m_alphabet_cb_list.push_back(uuuu);
    m_alphabet_cb_list_b.push_back(v   );
    m_alphabet_cb_list_b.push_back(z   );
    m_alphabet_cb_list_b.push_back(zs  );

    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list.begin(); it != m_alphabet_cb_list.end();it++)
    {
      m_alphabet_list.push_back( ((*it)->text()).toUtf8().constData() );
    }
    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list_b.begin(); it != m_alphabet_cb_list_b.end();it++)
    {
      m_alphabet_list_b.push_back( ((*it)->text()).toUtf8().constData() );
    }
}

QCheckBox *MainWindow::createCheckBox(const QString &text)
{
    QCheckBox *checkBox = new QCheckBox(text);
    return checkBox;
}

void MainWindow::generateString(std::string &oString)
{
    m_checked.clear();
    m_checked.resize(0);
    m_unchecked.clear();
    m_unchecked.resize(0);
    m_checked_b.clear();
    m_checked_b.resize(0);

    std::vector<std::string>::iterator vIt = m_alphabet_list.begin();
    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list.begin(); it != m_alphabet_cb_list.end();it++)
    {
      if((*it)->checkState())
      {
        m_checked.push_back(*vIt);
      }
      else
      {
        m_unchecked.push_back(*vIt);
      }
      vIt++;
    }

    std::vector<std::string>::iterator vIt_b = m_alphabet_list_b.begin();
    for(std::vector<QCheckBox*>::iterator it = m_alphabet_cb_list_b.begin(); it != m_alphabet_cb_list_b.end();it++)
    {
      if((*it)->checkState())
      {
        m_checked_b.push_back(*vIt_b);
      }
      else
      {
        m_unchecked.push_back(*vIt_b);
      }
      vIt_b++;
    }

    srand (time(NULL));

    if(m_randomCehckbox->checkState()){

    int a_size = m_checked.size();
    int b_size = m_checked_b.size();

    int wFirst = (rand() % 2);

    for (int i = 0 ; i < m_amount ; i++)
    {

        if(wFirst)
        {
            int wIdx =(a_size>0) ? (rand() % a_size) : 0;
            wIdx = (wIdx == m_prev_idx.at(i))?   ( ((wIdx + 1)>=a_size) ? --wIdx : ++wIdx  )  : wIdx;
            m_prev_idx.at(i) = wIdx;
            oString += (a_size>0) ?  m_checked.at(wIdx) : "";
            wFirst = 0;
        }
        else
        {
            int wIdx_b = (b_size>0) ? (rand() % b_size) : 0;
            wIdx_b = (wIdx_b == m_prev_idx_b.at(i))?   ( ((wIdx_b + 1)>=b_size) ? --wIdx_b : ++wIdx_b  )  : wIdx_b;
            m_prev_idx_b.at(i) = wIdx_b;
            oString += (b_size>0) ? m_checked_b.at(wIdx_b) : "";
            wFirst = 1;
        }
    }

    }
    else
    {

    if(m_amount < 2)
        m_amount = 2;
    if(m_amount > 9)
        m_amount = 9;

    bool OK = false;    

    static int prevIdx = -1;
    while(!OK){
        int sizeOfSzotar = gSzotar[m_amount -2].size();
        int index = (rand() % sizeOfSzotar);
        while(prevIdx == index){
                index = (rand() % sizeOfSzotar);
        }
        prevIdx = index;

        OK = true;
        oString = gSzotar[m_amount-2][index];
        for(int i = 0; i < (gSzotar[m_amount-2][index]).length(); ++i)
        {
            for(int j = 0; j < m_unchecked.size(); ++j)
            {
                std::string str1 = gSzotar[m_amount-2][index];
                std::string str2 = m_unchecked[j];

                std::size_t found = str1.find(str2);
                  if (found!=std::string::npos){
                    OK = false;
                    break;
                  }
            }
        }
    }
    }
    std::cout << oString << std::endl;
}

void MainWindow::setQstringLink(QString &link)
{

    std::vector<QString> links;
    links.push_back("https://www.youtube.com/watch?v=xcgW3s-NBBI");
    links.push_back("https://www.youtube.com/watch?v=jHWKtQHXVJg");
    links.push_back("https://www.youtube.com/watch?v=KydI7KF3YkM");
    links.push_back("https://www.youtube.com/watch?v=I-ovzUNno7g");
    links.push_back("https://www.youtube.com/watch?v=sGF6bOi1NfA");
    links.push_back("https://www.youtube.com/watch?v=q625P-DBRd4");
    links.push_back("https://www.youtube.com/watch?v=CGilPYScFLQ");
    links.push_back("https://www.youtube.com/watch?v=Ikw5HhxC5UM");
    links.push_back("https://www.youtube.com/watch?v=Z4XyNduV5bw");
    links.push_back("https://www.youtube.com/watch?v=Gjfx4BBD93U");
    links.push_back("https://www.youtube.com/watch?v=hDJkFLnmFHU");
    links.push_back("https://www.youtube.com/watch?v=Z98ZxYFsIWo");
    links.push_back("https://www.youtube.com/watch?v=9RI_TRrXr1Q");
    links.push_back("https://www.youtube.com/watch?v=aAfq6DKNku4");
    links.push_back("https://www.youtube.com/watch?v=IKSn2I5UGrw");
    links.push_back("https://www.youtube.com/watch?v=PYOSKYWg-5E");
    links.push_back("https://www.youtube.com/watch?v=oL5H9fdCIp4");
    links.push_back("https://www.youtube.com/watch?v=wPTN0Wfgjg0");
    links.push_back("https://www.youtube.com/watch?v=viRQWyCR0YY");
    links.push_back("https://www.youtube.com/watch?v=RKU6x1n9Hak");

    int link_amount = links.size();
    srand (time(0));
    int wIdx = (rand() % link_amount);

    link = links.at(wIdx);

    std::cout << "wIdx: " << wIdx << std::endl;
}
void MainWindow::getNextExcercise()
{
    std::string wString;
    generateString(wString);

    QString qs = QString::fromUtf8(wString.c_str());
    m_alphabet->setText(qs);
    m_score += (m_amount - 1);
    QString score = QString::number(m_score);
    m_score_text->setText(score);
    QString link;

    if(m_score >= m_score_limit)
    {
        // m_alphabet_widget->displayItem();
         m_score_limit += 50;
         setQstringLink(link);
         QDesktopServices::openUrl(QUrl(link));
         m_amount++;
         m_prev_idx.resize(m_amount);
         m_prev_idx_b.resize(m_amount);
    }
}
