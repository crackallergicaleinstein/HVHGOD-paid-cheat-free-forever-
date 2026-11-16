// FUN_180358500 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180358500 */

undefined1 (*) [16]
FUN_180358500(longlong *param_1,undefined1 (*param_2) [16],undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined1 auVar3 [16];
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined1 local_128 [144];
  uint local_98;
  uint local_94;
  float local_90;
  float local_7c;
  undefined1 local_6d;
  char local_20;
  
  if (*(char *)(*param_1 + 0x48) == '\0') {
    puVar1 = (undefined4 *)param_1[1];
    param_2[1][4] = 0;
    *puVar1 = 1;
  }
  else {
    cVar4 = FUN_180303860(1);
    if (cVar4 == '\0') {
      puVar1 = (undefined4 *)param_1[1];
      param_2[1][4] = 0;
      *puVar1 = 2;
    }
    else {
      lVar2 = *param_1;
      local_134 = *param_4;
      local_130 = param_4[1];
      local_12c = param_4[2];
      local_148 = *param_3;
      local_144 = param_3[1];
      local_140 = param_3[2];
      FUN_180418670(lVar2 + 0x18,local_128,&local_148,&local_134,lVar2 + 0x18,lVar2 + 0x24,
                    *(undefined8 *)(lVar2 + 0x30),*(undefined8 *)(lVar2 + 0x38));
      if (local_20 == '\0') {
        puVar1 = (undefined4 *)param_1[1];
        param_2[1][4] = 0;
        *puVar1 = 3;
      }
      else {
        fVar7 = *(float *)param_1[2];
        sVar5 = thunk_FUN_180624430(fVar7);
        if (sVar5 < 1) {
          if ((1.0 <= local_7c) || (uVar6 = 5, fVar7 <= local_90)) {
            uVar6 = 6;
          }
          auVar3 = vinsertps_avx(ZEXT416((uint)local_7c),ZEXT416(local_98),0x10);
          auVar3 = vinsertps_avx(auVar3,ZEXT416(local_94),0x20);
          *(undefined4 *)param_1[1] = uVar6;
          auVar3 = vinsertps_avx(auVar3,ZEXT416((uint)local_90),0x30);
          local_138._0_2_ = CONCAT11(local_6d,local_7c <= 0.0);
          *param_2 = auVar3;
          *(undefined4 *)param_2[1] = local_138;
          param_2[1][4] = 1;
        }
        else {
          puVar1 = (undefined4 *)param_1[1];
          param_2[1][4] = 0;
          *puVar1 = 4;
        }
      }
    }
  }
  return param_2;
}



