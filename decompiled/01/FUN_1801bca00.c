// FUN_1801bca00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1801bca00 */

ulonglong * FUN_1801bca00(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong *puVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong *puVar6;
  ulonglong *puVar7;
  
  puVar4 = param_2 + ((longlong)param_3 - (longlong)param_2 >> 4);
  FUN_1801bd1f0(param_2,puVar4,param_3 + -1);
  puVar6 = puVar4 + 1;
  if (param_2 < puVar4) {
    uVar2 = *puVar4;
    do {
      uVar1 = puVar4[-1];
      puVar7 = puVar4 + -1;
      if ((uVar1 < uVar2) || (uVar2 < uVar1)) break;
      uVar2 = uVar1;
      puVar4 = puVar7;
    } while (param_2 < puVar7);
  }
  puVar7 = puVar6;
  puVar5 = puVar4;
  if (puVar6 < param_3) {
    do {
      puVar7 = puVar6;
      if ((*puVar6 < *puVar4) || (*puVar4 < *puVar6)) break;
      puVar6 = puVar6 + 1;
      puVar7 = puVar6;
    } while (puVar6 < param_3);
  }
joined_r0x0001801bca7b:
  do {
    puVar3 = puVar4;
    if (param_3 <= puVar6) {
joined_r0x0001801bcaa8:
      for (; param_2 < puVar4; puVar4 = puVar4 + -1) {
        puVar3 = puVar3 + -1;
        uVar2 = *puVar3;
        if (*puVar5 <= uVar2) {
          if (*puVar5 < uVar2) break;
          puVar5 = puVar5 + -1;
          if (puVar5 != puVar3) {
            uVar1 = *puVar5;
            *puVar5 = uVar2;
            *puVar3 = uVar1;
          }
        }
      }
      if (puVar4 == param_2) {
        if (puVar6 == param_3) {
          *param_1 = (ulonglong)puVar5;
          param_1[1] = (ulonglong)puVar7;
          return param_1;
        }
        if (puVar7 != puVar6) {
          uVar2 = *puVar5;
          *puVar5 = *puVar7;
          *puVar7 = uVar2;
        }
        uVar2 = *puVar5;
        *puVar5 = *puVar6;
        *puVar6 = uVar2;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
        puVar5 = puVar5 + 1;
      }
      else {
        puVar4 = puVar4 + -1;
        if (puVar6 == param_3) {
          puVar5 = puVar5 + -1;
          if (puVar4 != puVar5) {
            uVar2 = *puVar4;
            *puVar4 = *puVar5;
            *puVar5 = uVar2;
          }
          uVar2 = *puVar5;
          *puVar5 = puVar7[-1];
          puVar7[-1] = uVar2;
          puVar7 = puVar7 + -1;
        }
        else {
          uVar2 = *puVar6;
          *puVar6 = *puVar4;
          puVar6 = puVar6 + 1;
          *puVar4 = uVar2;
        }
      }
      goto joined_r0x0001801bca7b;
    }
    uVar2 = *puVar6;
    if (uVar2 <= *puVar5) {
      if (uVar2 < *puVar5) goto joined_r0x0001801bcaa8;
      if (puVar7 != puVar6) {
        uVar1 = *puVar7;
        *puVar7 = uVar2;
        *puVar6 = uVar1;
      }
      puVar7 = puVar7 + 1;
    }
    puVar6 = puVar6 + 1;
  } while( true );
}



