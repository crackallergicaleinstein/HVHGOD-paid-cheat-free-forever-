// FUN_18016cf30 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18016cf30 */

void FUN_18016cf30(undefined8 param_1,undefined8 *param_2,char param_3,undefined8 param_4)

{
  size_t sVar1;
  ulonglong uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *_Buf2;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  size_t _Size;
  bool bVar9;
  
  if (param_3 == '\0') {
    sVar1 = param_2[2];
    uVar2 = param_2[3];
    puVar6 = param_2;
    if (0xf < uVar2) {
      puVar6 = (undefined8 *)*param_2;
    }
    puVar4 = &DAT_180bb8eb0;
    if (0xf < DAT_180bb8ec8) {
      puVar4 = DAT_180bb8eb0;
    }
    if ((DAT_180bb8ec0 == sVar1) &&
       (((DAT_180bb8ec0 == 0 || (iVar3 = memcmp(puVar4,puVar6,DAT_180bb8ec0), iVar3 == 0)) &&
        (_Size = DAT_180bb8ee0, DAT_180bb8ee0 != 0)))) {
      puVar6 = &DAT_180bb8cb0;
      if (0xf < DAT_180bb8cc8) {
        puVar6 = DAT_180bb8cb0;
      }
      if (0xf < uVar2) {
        param_2 = (undefined8 *)*param_2;
      }
      if ((sVar1 == DAT_180bb8cc0) &&
         ((sVar1 == 0 || (iVar3 = memcmp(param_2,puVar6,sVar1), iVar3 == 0)))) {
        FUN_180172a90();
        _Size = DAT_180bb8ee0;
      }
      puVar7 = DAT_180bb8ed0;
      puVar4 = DAT_180bb8b20;
      puVar8 = &DAT_180bb8ed0;
      puVar6 = DAT_180bb8b18;
      puVar5 = &DAT_180bb8ed0;
      if (0xf < DAT_180bb8ee8) {
        puVar5 = DAT_180bb8ed0;
      }
      for (; puVar6 != puVar4; puVar6 = puVar6 + 0x2d) {
        if (*(char *)((longlong)puVar6 + 0xe3) != '\0') {
          _Buf2 = puVar6;
          if (0xf < (ulonglong)puVar6[3]) {
            _Buf2 = (undefined8 *)*puVar6;
          }
          if ((_Size == puVar6[2]) &&
             ((_Size == 0 || (iVar3 = memcmp(puVar5,_Buf2,_Size), iVar3 == 0)))) {
            puVar8 = &DAT_180bb8cf0;
            puVar7 = DAT_180bb8cf0;
            break;
          }
        }
      }
      if ((ulonglong)puVar8[3] < 0x10) {
        puVar7 = puVar8;
      }
      FUN_180113930(&DAT_180bb8eb0,puVar7,puVar8[2]);
      puVar6 = &DAT_180bb8eb0;
      if (0xf < DAT_180bb8ec8) {
        puVar6 = DAT_180bb8eb0;
      }
      FUN_180113930(&DAT_180bb8ef0,puVar6,DAT_180bb8ec0);
      puVar4 = DAT_180bb8b20;
      for (puVar6 = DAT_180bb8b18; puVar6 != puVar4; puVar6 = puVar6 + 0x2d) {
        sVar1 = puVar6[2];
        puVar7 = &DAT_180bb8eb0;
        if (0xf < DAT_180bb8ec8) {
          puVar7 = DAT_180bb8eb0;
        }
        puVar5 = puVar6;
        if (0xf < (ulonglong)puVar6[3]) {
          puVar5 = (undefined8 *)*puVar6;
        }
        if (sVar1 == DAT_180bb8ec0) {
          if (sVar1 == 0) {
            bVar9 = true;
          }
          else {
            iVar3 = memcmp(puVar5,puVar7,sVar1);
            bVar9 = iVar3 == 0;
          }
        }
        else {
          bVar9 = false;
        }
        *(bool *)(puVar6 + 0x1c) = bVar9;
      }
    }
  }
  else if ((undefined8 **)param_2 != &DAT_180bb8ed0) {
    puVar6 = param_2 + 2;
    if (0xf < (ulonglong)param_2[3]) {
      param_2 = (undefined8 *)*param_2;
    }
    FUN_180113930(&DAT_180bb8ed0,param_2,*puVar6);
  }
  FUN_18016df60(&DAT_180bb8af0,param_4,param_3);
  return;
}



