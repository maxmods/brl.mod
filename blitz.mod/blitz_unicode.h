
#ifndef BLITZ_UNICODE_H
#define BLITZ_UNICODE_H

unsigned short bbToLowerData[]={
//	65,97,66,98,67,99,68,100,69,101,70,102,71,103,72,104,
//	73,105,74,106,75,107,76,108,77,109,78,110,79,111,80,112,
//	81,113,82,114,83,115,84,116,85,117,86,118,87,119,88,120,
//	89,121,90,122,
	192,224,193,225,194,226,195,227,196,228,197,229,
	198,230,199,231,200,232,201,233,202,234,203,235,204,236,205,237,
	206,238,207,239,208,240,209,241,210,242,211,243,212,244,213,245,
	214,246,216,248,217,249,218,250,219,251,220,252,221,253,222,254,
	256,257,258,259,260,261,262,263,264,265,266,267,268,269,270,271,
	272,273,274,275,276,277,278,279,280,281,282,283,284,285,286,287,
	288,289,290,291,292,293,294,295,296,297,298,299,300,301,302,303,
	304,105,306,307,308,309,310,311,313,314,315,316,317,318,319,320,
	321,322,323,324,325,326,327,328,330,331,332,333,334,335,336,337,
	338,339,340,341,342,343,344,345,346,347,348,349,350,351,352,353,
	354,355,356,357,358,359,360,361,362,363,364,365,366,367,368,369,
	370,371,372,373,374,375,376,255,377,378,379,380,381,382,385,595,
	386,387,388,389,390,596,391,392,393,598,394,599,395,396,398,477,
	399,601,400,603,401,402,403,608,404,611,406,617,407,616,408,409,
	412,623,413,626,415,629,416,417,418,419,420,421,422,640,423,424,
	425,643,428,429,430,648,431,432,433,650,434,651,435,436,437,438,
	439,658,440,441,444,445,452,454,453,454,455,457,456,457,458,460,
	459,460,461,462,463,464,465,466,467,468,469,470,471,472,473,474,
	475,476,478,479,480,481,482,483,484,485,486,487,488,489,490,491,
	492,493,494,495,497,499,498,499,500,501,502,405,503,447,504,505,
	506,507,508,509,510,511,512,513,514,515,516,517,518,519,520,521,
	522,523,524,525,526,527,528,529,530,531,532,533,534,535,536,537,
	538,539,540,541,542,543,544,414,546,547,548,549,550,551,552,553,
	554,555,556,557,558,559,560,561,562,563,570,11365,571,572,573,410,
	574,11366,577,578,579,384,580,649,581,652,582,583,584,585,586,587,
	588,589,590,591,880,881,882,883,886,887,902,940,904,941,905,942,
	906,943,908,972,910,973,911,974,913,945,914,946,915,947,916,948,
	917,949,918,950,919,951,920,952,921,953,922,954,923,955,924,956,
	925,957,926,958,927,959,928,960,929,961,931,963,932,964,933,965,
	934,966,935,967,936,968,937,969,938,970,939,971,975,983,984,985,
	986,987,988,989,990,991,992,993,994,995,996,997,998,999,1000,1001,
	1002,1003,1004,1005,1006,1007,1012,952,1015,1016,1017,1010,1018,1019,1021,891,
	1022,892,1023,893,1024,1104,1025,1105,1026,1106,1027,1107,1028,1108,1029,1109,
	1030,1110,1031,1111,1032,1112,1033,1113,1034,1114,1035,1115,1036,1116,1037,1117,
	1038,1118,1039,1119,1040,1072,1041,1073,1042,1074,1043,1075,1044,1076,1045,1077,
	1046,1078,1047,1079,1048,1080,1049,1081,1050,1082,1051,1083,1052,1084,1053,1085,
	1054,1086,1055,1087,1056,1088,1057,1089,1058,1090,1059,1091,1060,1092,1061,1093,
	1062,1094,1063,1095,1064,1096,1065,1097,1066,1098,1067,1099,1068,1100,1069,1101,
	1070,1102,1071,1103,1120,1121,1122,1123,1124,1125,1126,1127,1128,1129,1130,1131,
	1132,1133,1134,1135,1136,1137,1138,1139,1140,1141,1142,1143,1144,1145,1146,1147,
	1148,1149,1150,1151,1152,1153,1162,1163,1164,1165,1166,1167,1168,1169,1170,1171,
	1172,1173,1174,1175,1176,1177,1178,1179,1180,1181,1182,1183,1184,1185,1186,1187,
	1188,1189,1190,1191,1192,1193,1194,1195,1196,1197,1198,1199,1200,1201,1202,1203,
	1204,1205,1206,1207,1208,1209,1210,1211,1212,1213,1214,1215,1216,1231,1217,1218,
	1219,1220,1221,1222,1223,1224,1225,1226,1227,1228,1229,1230,1232,1233,1234,1235,
	1236,1237,1238,1239,1240,1241,1242,1243,1244,1245,1246,1247,1248,1249,1250,1251,
	1252,1253,1254,1255,1256,1257,1258,1259,1260,1261,1262,1263,1264,1265,1266,1267,
	1268,1269,1270,1271,1272,1273,1274,1275,1276,1277,1278,1279,1280,1281,1282,1283,
	1284,1285,1286,1287,1288,1289,1290,1291,1292,1293,1294,1295,1296,1297,1298,1299,
	1300,1301,1302,1303,1304,1305,1306,1307,1308,1309,1310,1311,1312,1313,1314,1315,
	1329,1377,1330,1378,1331,1379,1332,1380,1333,1381,1334,1382,1335,1383,1336,1384,
	1337,1385,1338,1386,1339,1387,1340,1388,1341,1389,1342,1390,1343,1391,1344,1392,
	1345,1393,1346,1394,1347,1395,1348,1396,1349,1397,1350,1398,1351,1399,1352,1400,
	1353,1401,1354,1402,1355,1403,1356,1404,1357,1405,1358,1406,1359,1407,1360,1408,
	1361,1409,1362,1410,1363,1411,1364,1412,1365,1413,1366,1414,4256,11520,4257,11521,
	4258,11522,4259,11523,4260,11524,4261,11525,4262,11526,4263,11527,4264,11528,4265,11529,
	4266,11530,4267,11531,4268,11532,4269,11533,4270,11534,4271,11535,4272,11536,4273,11537,
	4274,11538,4275,11539,4276,11540,4277,11541,4278,11542,4279,11543,4280,11544,4281,11545,
	4282,11546,4283,11547,4284,11548,4285,11549,4286,11550,4287,11551,4288,11552,4289,11553,
	4290,11554,4291,11555,4292,11556,4293,11557,7680,7681,7682,7683,7684,7685,7686,7687,
	7688,7689,7690,7691,7692,7693,7694,7695,7696,7697,7698,7699,7700,7701,7702,7703,
	7704,7705,7706,7707,7708,7709,7710,7711,7712,7713,7714,7715,7716,7717,7718,7719,
	7720,7721,7722,7723,7724,7725,7726,7727,7728,7729,7730,7731,7732,7733,7734,7735,
	7736,7737,7738,7739,7740,7741,7742,7743,7744,7745,7746,7747,7748,7749,7750,7751,
	7752,7753,7754,7755,7756,7757,7758,7759,7760,7761,7762,7763,7764,7765,7766,7767,
	7768,7769,7770,7771,7772,7773,7774,7775,7776,7777,7778,7779,7780,7781,7782,7783,
	7784,7785,7786,7787,7788,7789,7790,7791,7792,7793,7794,7795,7796,7797,7798,7799,
	7800,7801,7802,7803,7804,7805,7806,7807,7808,7809,7810,7811,7812,7813,7814,7815,
	7816,7817,7818,7819,7820,7821,7822,7823,7824,7825,7826,7827,7828,7829,7838,223,
	7840,7841,7842,7843,7844,7845,7846,7847,7848,7849,7850,7851,7852,7853,7854,7855,
	7856,7857,7858,7859,7860,7861,7862,7863,7864,7865,7866,7867,7868,7869,7870,7871,
	7872,7873,7874,7875,7876,7877,7878,7879,7880,7881,7882,7883,7884,7885,7886,7887,
	7888,7889,7890,7891,7892,7893,7894,7895,7896,7897,7898,7899,7900,7901,7902,7903,
	7904,7905,7906,7907,7908,7909,7910,7911,7912,7913,7914,7915,7916,7917,7918,7919,
	7920,7921,7922,7923,7924,7925,7926,7927,7928,7929,7930,7931,7932,7933,7934,7935,
	7944,7936,7945,7937,7946,7938,7947,7939,7948,7940,7949,7941,7950,7942,7951,7943,
	7960,7952,7961,7953,7962,7954,7963,7955,7964,7956,7965,7957,7976,7968,7977,7969,
	7978,7970,7979,7971,7980,7972,7981,7973,7982,7974,7983,7975,7992,7984,7993,7985,
	7994,7986,7995,7987,7996,7988,7997,7989,7998,7990,7999,7991,8008,8000,8009,8001,
	8010,8002,8011,8003,8012,8004,8013,8005,8025,8017,8027,8019,8029,8021,8031,8023,
	8040,8032,8041,8033,8042,8034,8043,8035,8044,8036,8045,8037,8046,8038,8047,8039,
	8072,8064,8073,8065,8074,8066,8075,8067,8076,8068,8077,8069,8078,8070,8079,8071,
	8088,8080,8089,8081,8090,8082,8091,8083,8092,8084,8093,8085,8094,8086,8095,8087,
	8104,8096,8105,8097,8106,8098,8107,8099,8108,8100,8109,8101,8110,8102,8111,8103,
	8120,8112,8121,8113,8122,8048,8123,8049,8124,8115,8136,8050,8137,8051,8138,8052,
	8139,8053,8140,8131,8152,8144,8153,8145,8154,8054,8155,8055,8168,8160,8169,8161,
	8170,8058,8171,8059,8172,8165,8184,8056,8185,8057,8186,8060,8187,8061,8188,8179,
	8486,969,8490,107,8491,229,8498,8526,8544,8560,8545,8561,8546,8562,8547,8563,
	8548,8564,8549,8565,8550,8566,8551,8567,8552,8568,8553,8569,8554,8570,8555,8571,
	8556,8572,8557,8573,8558,8574,8559,8575,8579,8580,9398,9424,9399,9425,9400,9426,
	9401,9427,9402,9428,9403,9429,9404,9430,9405,9431,9406,9432,9407,9433,9408,9434,
	9409,9435,9410,9436,9411,9437,9412,9438,9413,9439,9414,9440,9415,9441,9416,9442,
	9417,9443,9418,9444,9419,9445,9420,9446,9421,9447,9422,9448,9423,9449,11264,11312,
	11265,11313,11266,11314,11267,11315,11268,11316,11269,11317,11270,11318,11271,11319,11272,11320,
	11273,11321,11274,11322,11275,11323,11276,11324,11277,11325,11278,11326,11279,11327,11280,11328,
	11281,11329,11282,11330,11283,11331,11284,11332,11285,11333,11286,11334,11287,11335,11288,11336,
	11289,11337,11290,11338,11291,11339,11292,11340,11293,11341,11294,11342,11295,11343,11296,11344,
	11297,11345,11298,11346,11299,11347,11300,11348,11301,11349,11302,11350,11303,11351,11304,11352,
	11305,11353,11306,11354,11307,11355,11308,11356,11309,11357,11310,11358,11360,11361,11362,619,
	11363,7549,11364,637,11367,11368,11369,11370,11371,11372,11373,593,11374,625,11375,592,
	11378,11379,11381,11382,11392,11393,11394,11395,11396,11397,11398,11399,11400,11401,11402,11403,
	11404,11405,11406,11407,11408,11409,11410,11411,11412,11413,11414,11415,11416,11417,11418,11419,
	11420,11421,11422,11423,11424,11425,11426,11427,11428,11429,11430,11431,11432,11433,11434,11435,
	11436,11437,11438,11439,11440,11441,11442,11443,11444,11445,11446,11447,11448,11449,11450,11451,
	11452,11453,11454,11455,11456,11457,11458,11459,11460,11461,11462,11463,11464,11465,11466,11467,
	11468,11469,11470,11471,11472,11473,11474,11475,11476,11477,11478,11479,11480,11481,11482,11483,
	11484,11485,11486,11487,11488,11489,11490,11491,42560,42561,42562,42563,42564,42565,42566,42567,
	42568,42569,42570,42571,42572,42573,42574,42575,42576,42577,42578,42579,42580,42581,42582,42583,
	42584,42585,42586,42587,42588,42589,42590,42591,42594,42595,42596,42597,42598,42599,42600,42601,
	42602,42603,42604,42605,42624,42625,42626,42627,42628,42629,42630,42631,42632,42633,42634,42635,
	42636,42637,42638,42639,42640,42641,42642,42643,42644,42645,42646,42647,42786,42787,42788,42789,
	42790,42791,42792,42793,42794,42795,42796,42797,42798,42799,42802,42803,42804,42805,42806,42807,
	42808,42809,42810,42811,42812,42813,42814,42815,42816,42817,42818,42819,42820,42821,42822,42823,
	42824,42825,42826,42827,42828,42829,42830,42831,42832,42833,42834,42835,42836,42837,42838,42839,
	42840,42841,42842,42843,42844,42845,42846,42847,42848,42849,42850,42851,42852,42853,42854,42855,
	42856,42857,42858,42859,42860,42861,42862,42863,42873,42874,42875,42876,42877,7545,42878,42879,
	42880,42881,42882,42883,42884,42885,42886,42887,42891,42892,65313,65345,65314,65346,65315,65347,
	65316,65348,65317,65349,65318,65350,65319,65351,65320,65352,65321,65353,65322,65354,65323,65355,
	65324,65356,65325,65357,65326,65358,65327,65359,65328,65360,65329,65361,65330,65362,65331,65363,
	65332,65364,65333,65365,65334,65366,65335,65367,65336,65368,65337,65369,65338,65370 };

unsigned short bbToUpperData[]={
//	97,65,98,66,99,67,100,68,101,69,102,70,103,71,104,72,
//	105,73,106,74,107,75,108,76,109,77,110,78,111,79,112,80,
//	113,81,114,82,115,83,116,84,117,85,118,86,119,87,120,88,
//	121,89,122,90,
	181,924,224,192,225,193,226,194,227,195,228,196,
	229,197,230,198,231,199,232,200,233,201,234,202,235,203,236,204,
	237,205,238,206,239,207,240,208,241,209,242,210,243,211,244,212,
	245,213,246,214,248,216,249,217,250,218,251,219,252,220,253,221,
	254,222,255,376,257,256,259,258,261,260,263,262,265,264,267,266,
	269,268,271,270,273,272,275,274,277,276,279,278,281,280,283,282,
	285,284,287,286,289,288,291,290,293,292,295,294,297,296,299,298,
	301,300,303,302,305,73,307,306,309,308,311,310,314,313,316,315,
	318,317,320,319,322,321,324,323,326,325,328,327,331,330,333,332,
	335,334,337,336,339,338,341,340,343,342,345,344,347,346,349,348,
	351,350,353,352,355,354,357,356,359,358,361,360,363,362,365,364,
	367,366,369,368,371,370,373,372,375,374,378,377,380,379,382,381,
	383,83,384,579,387,386,389,388,392,391,396,395,402,401,405,502,
	409,408,410,573,414,544,417,416,419,418,421,420,424,423,429,428,
	432,431,436,435,438,437,441,440,445,444,447,503,452,453,454,453,
	455,456,457,456,458,459,460,459,462,461,464,463,466,465,468,467,
	470,469,472,471,474,473,476,475,477,398,479,478,481,480,483,482,
	485,484,487,486,489,488,491,490,493,492,495,494,497,498,499,498,
	501,500,505,504,507,506,509,508,511,510,513,512,515,514,517,516,
	519,518,521,520,523,522,525,524,527,526,529,528,531,530,533,532,
	535,534,537,536,539,538,541,540,543,542,547,546,549,548,551,550,
	553,552,555,554,557,556,559,558,561,560,563,562,572,571,578,577,
	583,582,585,584,587,586,589,588,591,590,592,11375,593,11373,595,385,
	596,390,598,393,599,394,601,399,603,400,608,403,611,404,616,407,
	617,406,619,11362,623,412,625,11374,626,413,629,415,637,11364,640,422,
	643,425,648,430,649,580,650,433,651,434,652,581,658,439,837,921,
	881,880,883,882,887,886,891,1021,892,1022,893,1023,940,902,941,904,
	942,905,943,906,945,913,946,914,947,915,948,916,949,917,950,918,
	951,919,952,920,953,921,954,922,955,923,956,924,957,925,958,926,
	959,927,960,928,961,929,962,931,963,931,964,932,965,933,966,934,
	967,935,968,936,969,937,970,938,971,939,972,908,973,910,974,911,
	976,914,977,920,981,934,982,928,983,975,985,984,987,986,989,988,
	991,990,993,992,995,994,997,996,999,998,1001,1000,1003,1002,1005,1004,
	1007,1006,1008,922,1009,929,1010,1017,1013,917,1016,1015,1019,1018,1072,1040,
	1073,1041,1074,1042,1075,1043,1076,1044,1077,1045,1078,1046,1079,1047,1080,1048,
	1081,1049,1082,1050,1083,1051,1084,1052,1085,1053,1086,1054,1087,1055,1088,1056,
	1089,1057,1090,1058,1091,1059,1092,1060,1093,1061,1094,1062,1095,1063,1096,1064,
	1097,1065,1098,1066,1099,1067,1100,1068,1101,1069,1102,1070,1103,1071,1104,1024,
	1105,1025,1106,1026,1107,1027,1108,1028,1109,1029,1110,1030,1111,1031,1112,1032,
	1113,1033,1114,1034,1115,1035,1116,1036,1117,1037,1118,1038,1119,1039,1121,1120,
	1123,1122,1125,1124,1127,1126,1129,1128,1131,1130,1133,1132,1135,1134,1137,1136,
	1139,1138,1141,1140,1143,1142,1145,1144,1147,1146,1149,1148,1151,1150,1153,1152,
	1163,1162,1165,1164,1167,1166,1169,1168,1171,1170,1173,1172,1175,1174,1177,1176,
	1179,1178,1181,1180,1183,1182,1185,1184,1187,1186,1189,1188,1191,1190,1193,1192,
	1195,1194,1197,1196,1199,1198,1201,1200,1203,1202,1205,1204,1207,1206,1209,1208,
	1211,1210,1213,1212,1215,1214,1218,1217,1220,1219,1222,1221,1224,1223,1226,1225,
	1228,1227,1230,1229,1231,1216,1233,1232,1235,1234,1237,1236,1239,1238,1241,1240,
	1243,1242,1245,1244,1247,1246,1249,1248,1251,1250,1253,1252,1255,1254,1257,1256,
	1259,1258,1261,1260,1263,1262,1265,1264,1267,1266,1269,1268,1271,1270,1273,1272,
	1275,1274,1277,1276,1279,1278,1281,1280,1283,1282,1285,1284,1287,1286,1289,1288,
	1291,1290,1293,1292,1295,1294,1297,1296,1299,1298,1301,1300,1303,1302,1305,1304,
	1307,1306,1309,1308,1311,1310,1313,1312,1315,1314,1377,1329,1378,1330,1379,1331,
	1380,1332,1381,1333,1382,1334,1383,1335,1384,1336,1385,1337,1386,1338,1387,1339,
	1388,1340,1389,1341,1390,1342,1391,1343,1392,1344,1393,1345,1394,1346,1395,1347,
	1396,1348,1397,1349,1398,1350,1399,1351,1400,1352,1401,1353,1402,1354,1403,1355,
	1404,1356,1405,1357,1406,1358,1407,1359,1408,1360,1409,1361,1410,1362,1411,1363,
	1412,1364,1413,1365,1414,1366,7545,42877,7549,11363,7681,7680,7683,7682,7685,7684,
	7687,7686,7689,7688,7691,7690,7693,7692,7695,7694,7697,7696,7699,7698,7701,7700,
	7703,7702,7705,7704,7707,7706,7709,7708,7711,7710,7713,7712,7715,7714,7717,7716,
	7719,7718,7721,7720,7723,7722,7725,7724,7727,7726,7729,7728,7731,7730,7733,7732,
	7735,7734,7737,7736,7739,7738,7741,7740,7743,7742,7745,7744,7747,7746,7749,7748,
	7751,7750,7753,7752,7755,7754,7757,7756,7759,7758,7761,7760,7763,7762,7765,7764,
	7767,7766,7769,7768,7771,7770,7773,7772,7775,7774,7777,7776,7779,7778,7781,7780,
	7783,7782,7785,7784,7787,7786,7789,7788,7791,7790,7793,7792,7795,7794,7797,7796,
	7799,7798,7801,7800,7803,7802,7805,7804,7807,7806,7809,7808,7811,7810,7813,7812,
	7815,7814,7817,7816,7819,7818,7821,7820,7823,7822,7825,7824,7827,7826,7829,7828,
	7835,7776,7841,7840,7843,7842,7845,7844,7847,7846,7849,7848,7851,7850,7853,7852,
	7855,7854,7857,7856,7859,7858,7861,7860,7863,7862,7865,7864,7867,7866,7869,7868,
	7871,7870,7873,7872,7875,7874,7877,7876,7879,7878,7881,7880,7883,7882,7885,7884,
	7887,7886,7889,7888,7891,7890,7893,7892,7895,7894,7897,7896,7899,7898,7901,7900,
	7903,7902,7905,7904,7907,7906,7909,7908,7911,7910,7913,7912,7915,7914,7917,7916,
	7919,7918,7921,7920,7923,7922,7925,7924,7927,7926,7929,7928,7931,7930,7933,7932,
	7935,7934,7936,7944,7937,7945,7938,7946,7939,7947,7940,7948,7941,7949,7942,7950,
	7943,7951,7952,7960,7953,7961,7954,7962,7955,7963,7956,7964,7957,7965,7968,7976,
	7969,7977,7970,7978,7971,7979,7972,7980,7973,7981,7974,7982,7975,7983,7984,7992,
	7985,7993,7986,7994,7987,7995,7988,7996,7989,7997,7990,7998,7991,7999,8000,8008,
	8001,8009,8002,8010,8003,8011,8004,8012,8005,8013,8017,8025,8019,8027,8021,8029,
	8023,8031,8032,8040,8033,8041,8034,8042,8035,8043,8036,8044,8037,8045,8038,8046,
	8039,8047,8048,8122,8049,8123,8050,8136,8051,8137,8052,8138,8053,8139,8054,8154,
	8055,8155,8056,8184,8057,8185,8058,8170,8059,8171,8060,8186,8061,8187,8064,8072,
	8065,8073,8066,8074,8067,8075,8068,8076,8069,8077,8070,8078,8071,8079,8080,8088,
	8081,8089,8082,8090,8083,8091,8084,8092,8085,8093,8086,8094,8087,8095,8096,8104,
	8097,8105,8098,8106,8099,8107,8100,8108,8101,8109,8102,8110,8103,8111,8112,8120,
	8113,8121,8115,8124,8126,921,8131,8140,8144,8152,8145,8153,8160,8168,8161,8169,
	8165,8172,8179,8188,8526,8498,8560,8544,8561,8545,8562,8546,8563,8547,8564,8548,
	8565,8549,8566,8550,8567,8551,8568,8552,8569,8553,8570,8554,8571,8555,8572,8556,
	8573,8557,8574,8558,8575,8559,8580,8579,9424,9398,9425,9399,9426,9400,9427,9401,
	9428,9402,9429,9403,9430,9404,9431,9405,9432,9406,9433,9407,9434,9408,9435,9409,
	9436,9410,9437,9411,9438,9412,9439,9413,9440,9414,9441,9415,9442,9416,9443,9417,
	9444,9418,9445,9419,9446,9420,9447,9421,9448,9422,9449,9423,11312,11264,11313,11265,
	11314,11266,11315,11267,11316,11268,11317,11269,11318,11270,11319,11271,11320,11272,11321,11273,
	11322,11274,11323,11275,11324,11276,11325,11277,11326,11278,11327,11279,11328,11280,11329,11281,
	11330,11282,11331,11283,11332,11284,11333,11285,11334,11286,11335,11287,11336,11288,11337,11289,
	11338,11290,11339,11291,11340,11292,11341,11293,11342,11294,11343,11295,11344,11296,11345,11297,
	11346,11298,11347,11299,11348,11300,11349,11301,11350,11302,11351,11303,11352,11304,11353,11305,
	11354,11306,11355,11307,11356,11308,11357,11309,11358,11310,11361,11360,11365,570,11366,574,
	11368,11367,11370,11369,11372,11371,11379,11378,11382,11381,11393,11392,11395,11394,11397,11396,
	11399,11398,11401,11400,11403,11402,11405,11404,11407,11406,11409,11408,11411,11410,11413,11412,
	11415,11414,11417,11416,11419,11418,11421,11420,11423,11422,11425,11424,11427,11426,11429,11428,
	11431,11430,11433,11432,11435,11434,11437,11436,11439,11438,11441,11440,11443,11442,11445,11444,
	11447,11446,11449,11448,11451,11450,11453,11452,11455,11454,11457,11456,11459,11458,11461,11460,
	11463,11462,11465,11464,11467,11466,11469,11468,11471,11470,11473,11472,11475,11474,11477,11476,
	11479,11478,11481,11480,11483,11482,11485,11484,11487,11486,11489,11488,11491,11490,11520,4256,
	11521,4257,11522,4258,11523,4259,11524,4260,11525,4261,11526,4262,11527,4263,11528,4264,
	11529,4265,11530,4266,11531,4267,11532,4268,11533,4269,11534,4270,11535,4271,11536,4272,
	11537,4273,11538,4274,11539,4275,11540,4276,11541,4277,11542,4278,11543,4279,11544,4280,
	11545,4281,11546,4282,11547,4283,11548,4284,11549,4285,11550,4286,11551,4287,11552,4288,
	11553,4289,11554,4290,11555,4291,11556,4292,11557,4293,42561,42560,42563,42562,42565,42564,
	42567,42566,42569,42568,42571,42570,42573,42572,42575,42574,42577,42576,42579,42578,42581,42580,
	42583,42582,42585,42584,42587,42586,42589,42588,42591,42590,42595,42594,42597,42596,42599,42598,
	42601,42600,42603,42602,42605,42604,42625,42624,42627,42626,42629,42628,42631,42630,42633,42632,
	42635,42634,42637,42636,42639,42638,42641,42640,42643,42642,42645,42644,42647,42646,42787,42786,
	42789,42788,42791,42790,42793,42792,42795,42794,42797,42796,42799,42798,42803,42802,42805,42804,
	42807,42806,42809,42808,42811,42810,42813,42812,42815,42814,42817,42816,42819,42818,42821,42820,
	42823,42822,42825,42824,42827,42826,42829,42828,42831,42830,42833,42832,42835,42834,42837,42836,
	42839,42838,42841,42840,42843,42842,42845,42844,42847,42846,42849,42848,42851,42850,42853,42852,
	42855,42854,42857,42856,42859,42858,42861,42860,42863,42862,42874,42873,42876,42875,42879,42878,
	42881,42880,42883,42882,42885,42884,42887,42886,42892,42891,65345,65313,65346,65314,65347,65315,
	65348,65316,65349,65317,65350,65318,65351,65319,65352,65320,65353,65321,65354,65322,65355,65323,
	65356,65324,65357,65325,65358,65326,65359,65327,65360,65328,65361,65329,65362,65330,65363,65331,
	65364,65332,65365,65333,65366,65334,65367,65335,65368,65336,65369,65337,65370,65338 };

#endif
