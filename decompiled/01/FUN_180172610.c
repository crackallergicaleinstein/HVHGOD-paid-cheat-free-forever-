// FUN_180172610 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180172610 */

undefined8 * FUN_180172610(longlong param_1,undefined8 *param_2,undefined1 (*param_3) [16])

{
  undefined8 *puVar1;
  size_t sVar2;
  undefined8 _Buf1;
  undefined8 _Size;
  int iVar3;
  ulonglong *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined1 local_38 [16];
  
  lVar10 = *(longlong *)(*param_3 + 8);
  if (lVar10 != 0) {
    local_38 = (undefined1  [16])0x0;
    FUN_180172510(0,local_38);
    if (local_38._8_8_ != 0) {
      *param_2 = local_38._0_8_;
      param_2[1] = local_38._8_8_;
      return param_2;
    }
  }
  puVar9 = *(undefined8 **)(param_1 + 0x28);
  puVar1 = *(undefined8 **)(param_1 + 0x30);
  if ((ulonglong)(((longlong)puVar1 - (longlong)puVar9) / 0x168) < 100) {
    if (lVar10 != 0) {
      puVar7 = puVar9;
      if (puVar9 != puVar1) {
        local_38 = *param_3;
        _Size = local_38._8_8_;
        _Buf1 = local_38._0_8_;
        do {
          puVar5 = puVar7;
          if (0xf < (ulonglong)puVar7[3]) {
            puVar5 = (undefined8 *)*puVar7;
          }
        } while (((_Size != puVar7[2]) ||
                 ((_Size != 0 && (iVar3 = memcmp((void *)_Buf1,puVar5,_Size), iVar3 != 0)))) &&
                (puVar7 = puVar7 + 0x2d, puVar7 != puVar1));
      }
      if (puVar7 != puVar1) {
        puVar5 = puVar7 + 0x1d;
        if (*(char *)((longlong)puVar7 + 0xe3) == '\0') {
          puVar5 = puVar7;
        }
        lVar10 = 0;
        if (puVar9 != puVar1) {
          puVar8 = puVar9 + 0x2c;
          do {
            if (*(char *)((longlong)puVar8 + -0x7d) != '\0') {
              puVar6 = puVar5;
              if (0xf < (ulonglong)puVar5[3]) {
                puVar6 = (undefined8 *)*puVar5;
              }
              puVar4 = puVar8 + -0xf;
              sVar2 = puVar8[-0xd];
              if (0xf < puVar8[-0xc]) {
                puVar4 = (ulonglong *)*puVar4;
              }
              if ((sVar2 == puVar5[2]) &&
                 ((sVar2 == 0 || (iVar3 = memcmp(puVar4,puVar6,sVar2), iVar3 == 0)))) {
LAB_1801727b5:
                lVar10 = lVar10 + 1;
              }
              else if (puVar7[0x2b] != 0) {
                puVar6 = puVar7 + 0x29;
                if (0xf < (ulonglong)puVar7[0x2c]) {
                  puVar6 = (undefined8 *)puVar7[0x29];
                }
                puVar4 = puVar8 + -3;
                sVar2 = puVar8[-1];
                if (0xf < *puVar8) {
                  puVar4 = (ulonglong *)*puVar4;
                }
                if ((sVar2 == puVar7[0x2b]) &&
                   ((sVar2 == 0 || (iVar3 = memcmp(puVar4,puVar6,sVar2), iVar3 == 0))))
                goto LAB_1801727b5;
              }
            }
            puVar9 = puVar9 + 0x2d;
            puVar8 = puVar8 + 0x2d;
          } while (puVar9 != puVar1);
        }
        if (4 < lVar10) {
          param_2[1] = 0x3e;
          *param_2 = "This Workshop config already has 5 forks. Delete a fork first.";
          return param_2;
        }
      }
    }
    param_2[1] = 0;
    *param_2 = 0;
  }
  else {
    param_2[1] = 0x32;
    *param_2 = "Config limit reached (100). Delete a config first.";
  }
  return param_2;
}



