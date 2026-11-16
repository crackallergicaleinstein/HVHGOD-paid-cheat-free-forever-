// FUN_18050e540 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18050e540 */

void FUN_18050e540(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  char cVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  char cVar7;
  ulonglong uVar8;
  undefined1 local_60 [32];
  undefined1 local_40 [40];
  
  uVar8 = (((((((((ulonglong)param_1 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^
                (ulonglong)param_1 >> 8 & 0xff) * 0x100000001b3 ^ (ulonglong)param_1 >> 0x10 & 0xff)
               * 0x100000001b3 ^ (ulonglong)param_1 >> 0x18 & 0xff) * 0x100000001b3 ^
             (ulonglong)param_1 >> 0x20 & 0xff) * 0x100000001b3 ^ (ulonglong)param_1 >> 0x28 & 0xff)
            * 0x100000001b3 ^ (ulonglong)param_1 >> 0x30 & 0xff) * 0x100000001b3 ^
          (ulonglong)param_1 >> 0x38) * 0x100000001b3 & DAT_180c63040;
  lVar3 = *(longlong *)(DAT_180c63028 + 8 + uVar8 * 0x10);
  if (lVar3 == DAT_180c63018) {
LAB_18050e631:
    lVar3 = 0;
  }
  else {
    puVar1 = *(undefined1 **)(lVar3 + 0x10);
    while (param_1 != puVar1) {
      if (lVar3 == *(longlong *)(DAT_180c63028 + uVar8 * 0x10)) goto LAB_18050e631;
      lVar3 = *(longlong *)(lVar3 + 8);
      puVar1 = *(undefined1 **)(lVar3 + 0x10);
    }
  }
  lVar6 = DAT_180c63018;
  if (lVar3 != 0) {
    lVar6 = lVar3;
  }
  if (lVar6 != DAT_180c63018) {
    puVar1 = *(undefined1 **)(lVar6 + 0x18);
    cVar2 = FUN_1804c3590(1);
    if (((cVar2 != '\0') && (lVar3 = *(longlong *)(DAT_180bb8ae8 + 0x14d8), lVar3 != 0)) &&
       (lVar3 == *(longlong *)(DAT_180bb8ae8 + 0x14d0))) {
      cVar7 = '\0';
      lVar6 = DAT_180bb8ae8;
      cVar2 = FUN_1804b7ab0(lVar3);
      if (((cVar2 != '\0') &&
          (((*(int *)(lVar6 + 0x1550) == 0 || (*(char *)(lVar6 + 0x155f) != cVar7)) ||
           (*(int *)(lVar6 + 0x1550) == *(int *)(lVar3 + 0x8c))))) &&
         (cVar2 = FUN_1804c3600(param_2,param_3,1), cVar2 != '\0')) {
        FUN_180488320("##runtime_keybind");
      }
    }
    uVar4 = FUN_18015b360(local_60,puVar1 + 0x20);
    puVar5 = (undefined8 *)FUN_18050cb60(local_40,uVar4);
    if (0xf < (ulonglong)puVar5[3]) {
      puVar5 = (undefined8 *)*puVar5;
    }
    cVar2 = FUN_180488630("##runtime_keybind",puVar5,0x435c0000);
    FUN_18015c010(local_40);
    if (cVar2 != '\0') {
      FUN_18050e290(puVar1);
      *param_1 = *puVar1;
      FUN_1804aeac0();
    }
  }
  return;
}



