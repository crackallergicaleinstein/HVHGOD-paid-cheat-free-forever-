// FUN_1804b7e00 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1804b7e00 */

byte FUN_1804b7e00(float *param_1,int param_2,uint param_3)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  longlong lVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float local_res20;
  float local_res24;
  float local_48;
  float local_44;
  
  lVar3 = DAT_180bb8ae8;
  lVar6 = *(longlong *)(DAT_180bb8ae8 + 0x14d0);
  uVar10 = 0x3f800000;
  uVar11 = 0;
  lVar9 = lVar3;
  if ((((param_2 != 0) && (*(int *)(DAT_180bb8ae8 + 0x153c) == param_2)) && ((param_3 & 0x20) == 0))
     && (*(int *)(DAT_180bb8ae8 + 0x1540) = *(int *)(DAT_180bb8ae8 + 0x1540) + 1,
        *(int *)(lVar3 + 0x1530) == param_2)) {
    local_res20 = param_1[2] + 1.0;
    local_res24 = param_1[3] + 1.0;
    local_48 = *param_1 - 1.0;
    local_44 = param_1[1] - 1.0;
    FUN_1804de7c0(*(undefined8 *)(lVar6 + 0x2c8),&local_48,&local_res20,0xff0000ff,0,0x40000000,0);
    lVar9 = DAT_180bb8ae8;
  }
  if (*(longlong *)(lVar3 + 0x14d8) == lVar6) {
    uVar8 = 1;
    cVar4 = FUN_1804c3600(param_1,param_1 + 2);
    if (((cVar4 != '\0') &&
        (((*(int *)(lVar3 + 0x1538) == 0 || (*(int *)(lVar3 + 0x1538) == param_2)) ||
         (*(char *)(lVar3 + 0x154c) != '\0')))) &&
       (((*(int *)(lVar3 + 0x1550) == 0 || (*(int *)(lVar3 + 0x1550) == param_2)) ||
        ((*(char *)(lVar3 + 0x155f) != '\0' || (*(char *)(lVar3 + 0x1564) != '\0')))))) {
      if (((((((param_3 >> 0xd & 1) == 0) && (*(longlong *)(lVar9 + 0x2040) != 0)) &&
            (lVar1 = *(longlong *)(*(longlong *)(lVar9 + 0x2040) + 0x3d8), lVar1 != 0)) &&
           ((*(char *)(lVar1 + 0xcd) != '\0' &&
            (lVar6 = *(longlong *)(lVar6 + 0x3d8), lVar1 != lVar6)))) &&
          (((*(uint *)(lVar1 + 0x14) >> 0x1b & 1) != 0 ||
           ((*(uint *)(lVar1 + 0x14) >> 0x1a & 1) != 0)))) &&
         (*(longlong *)(lVar6 + 0x3d8) != lVar1)) {
        do {
          if (lVar6 == lVar1) goto LAB_1804b7f9b;
          lVar6 = *(longlong *)(lVar6 + 0x3d0);
        } while (lVar6 != 0);
      }
      else {
LAB_1804b7f9b:
        if (param_2 != 0) {
          if (((*(char *)(lVar3 + 0x2268) != '\0') && (*(int *)(lVar3 + 0x2284) == param_2)) &&
             ((*(byte *)(lVar3 + 0x226c) & 2) == 0)) {
            return 0;
          }
          *(int *)(lVar9 + 0x1538) = param_2;
          *(undefined1 *)(lVar9 + 0x154c) = 0;
          if (*(int *)(lVar9 + 0x153c) != param_2) {
            *(undefined8 *)(lVar9 + 0x1544) = 0;
          }
          if (((param_3 >> 0xe & 1) != 0) &&
             (*(undefined1 *)(lVar3 + 0x154c) = uVar8, *(int *)(lVar3 + 0x153c) != param_2)) {
            return 0;
          }
          if (((param_2 == *(int *)(lVar3 + 0x1ec0)) && ((*(uint *)(lVar3 + 0x1ec8) & 0x400) != 0))
             && (*(int *)(lVar3 + 0x1550) != param_2)) {
            cVar4 = FUN_1804b7b20(0x11000);
            if (cVar4 != '\0') {
              uVar7 = FUN_1804c2ac0(*(undefined4 *)(lVar3 + 0x1f0c));
              FUN_1804c75b0(&DAT_1806bbe98,uVar7);
            }
            lVar9 = DAT_180bb8ae8;
          }
        }
        if ((param_3 & 0x40) == 0) {
          if (param_2 != 0) {
            if ((*(char *)(lVar3 + 0x2909) != '\0') && (*(int *)(lVar3 + 0x153c) == param_2)) {
              uVar7 = FUN_1804b81b0(**(undefined8 **)(lVar9 + 0x2030),1,"##Foreground");
              FUN_1804de7c0(uVar7,param_1,param_1 + 2,0xff00ffff,uVar11,uVar10,0);
            }
            if (*(int *)(lVar3 + 0x290c) == param_2) {
              pcVar2 = (code *)swi(3);
              bVar5 = (*pcVar2)();
              return bVar5;
            }
          }
          if (*(char *)(lVar3 + 0x2039) == '\0') {
            return 1;
          }
          return (byte)(param_3 >> 0xf) & 1;
        }
        if ((*(int *)(lVar3 + 0x1550) == param_2) && (param_2 != 0)) {
          FUN_1804b7870(0,0);
        }
      }
      *(undefined1 *)(lVar3 + 0x154d) = 1;
    }
  }
  return 0;
}



