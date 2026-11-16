// FUN_18042b840 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18042b840 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18042b840(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5,longlong param_6,int param_7,uint param_8,int param_9)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  undefined1 in_ZMM2 [64];
  undefined1 in_ZMM3 [64];
  undefined1 auVar9 [64];
  undefined1 auVar10 [64];
  float fVar11;
  undefined1 auVar12 [64];
  float fVar13;
  undefined1 auStack_4f8 [32];
  undefined1 *local_4d8;
  undefined1 local_4d0;
  longlong local_4c0;
  undefined1 local_4b8 [1056];
  ulonglong local_98;
  
  local_98 = DAT_1808d5f00 ^ (ulonglong)auStack_4f8;
  uVar8 = (ulonglong)param_8;
  auVar9 = ZEXT1664(in_ZMM3._0_16_);
  auVar10 = ZEXT1664(in_ZMM2._0_16_);
  local_4c0 = param_6;
  *(longlong *)(param_1 + 0x68) = param_6;
  *(int *)(param_1 + 0x70) = param_7;
  *(uint *)(param_1 + 0x74) = param_8;
  *(int *)(param_1 + 0x78) = param_9;
  if (*(int *)(param_1 + 0x60) < param_7) {
    *(int *)(param_1 + 0x60) = param_7;
    lVar4 = _realloc_base(*(undefined8 *)(param_1 + 0x58),(longlong)param_7);
    *(longlong *)(param_1 + 0x58) = lVar4;
    if (lVar4 == 0) {
    }
  }
  if (0 < (int)param_8) {
    lVar4 = local_4c0;
    do {
      FUN_18063ab10(lVar4,0,(longlong)(param_7 * 4));
      lVar4 = lVar4 + param_9;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  lVar4 = *(longlong *)(param_2 + 8);
  if (lVar4 != 0) {
    fVar11 = 5.0;
    auVar12 = ZEXT464(param_5);
    fVar13 = 0.01;
    do {
      if ((*(byte *)(lVar4 + 0x96) & 1) != 0) {
        iVar7 = 0;
        do {
          bVar2 = *(byte *)(lVar4 + 0x95) >> ((char)iVar7 * '\x02' & 0x1fU) & 3;
          if (bVar2 == 0) {
            if (*(char *)(lVar4 + 0x40) != '\0') {
              for (lVar5 = *(longlong *)(param_1 + 0x48); lVar5 != 0;
                  lVar5 = *(longlong *)(lVar5 + 0x408)) {
                *(undefined4 *)(lVar5 + 0x400) = 0;
              }
              *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
              *(undefined8 *)(param_1 + 0x40) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              FUN_180428790(param_1,lVar4,auVar12._0_8_);
              iVar3 = *(int *)(param_1 + 0x18);
              iVar6 = 0;
              if (0 < iVar3) {
                lVar5 = 0;
                do {
                  lVar1 = *(longlong *)(param_1 + 0x10);
                  iVar6 = iVar6 + 1;
                  *(float *)(lVar5 + lVar1) = auVar10._0_4_ + *(float *)(lVar5 + lVar1);
                  *(float *)(lVar5 + 8 + lVar1) = auVar10._0_4_ + *(float *)(lVar5 + 8 + lVar1);
                  *(float *)(lVar5 + 4 + lVar1) =
                       (auVar9._0_4_ + *(float *)(lVar5 + 4 + lVar1)) * fVar11;
                  *(float *)(lVar5 + 0xc + lVar1) =
                       (auVar9._0_4_ + *(float *)(lVar5 + 0xc + lVar1)) * fVar11;
                  iVar3 = *(int *)(param_1 + 0x18);
                  lVar5 = lVar5 + 0x20;
                } while (iVar6 < iVar3);
              }
              if (iVar3 != 0) {
                FUN_1806192c0(*(undefined8 *)(param_1 + 0x10),(longlong)iVar3,0x20,FUN_18042a370);
              }
              FUN_18042b2e0(local_4b8,lVar4 + 0x40,*(undefined4 *)(lVar4 + 0x60));
              local_4d0 = *(undefined1 *)(lVar4 + 0x94);
              goto LAB_18042bb70;
            }
          }
          else if (((bVar2 == 2) && (*(char *)(lVar4 + 0x50) != '\0')) &&
                  (fVar13 < auVar12._0_4_ * *(float *)(lVar4 + 100))) {
            for (lVar5 = *(longlong *)(param_1 + 0x48); lVar5 != 0;
                lVar5 = *(longlong *)(lVar5 + 0x408)) {
              *(undefined4 *)(lVar5 + 0x400) = 0;
            }
            *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_1 + 0x48);
            *(undefined8 *)(param_1 + 0x40) = 0;
            *(undefined4 *)(param_1 + 0x18) = 0;
            FUN_180429b50(param_1,lVar4,auVar12._0_8_);
            iVar3 = *(int *)(param_1 + 0x18);
            iVar6 = 0;
            if (0 < iVar3) {
              lVar5 = 0;
              do {
                lVar1 = *(longlong *)(param_1 + 0x10);
                iVar6 = iVar6 + 1;
                *(float *)(lVar5 + lVar1) = auVar10._0_4_ + *(float *)(lVar5 + lVar1);
                *(float *)(lVar5 + 4 + lVar1) =
                     (auVar9._0_4_ + *(float *)(lVar5 + 4 + lVar1)) * fVar11;
                *(float *)(lVar5 + 8 + lVar1) = auVar10._0_4_ + *(float *)(lVar5 + 8 + lVar1);
                *(float *)(lVar5 + 0xc + lVar1) =
                     (auVar9._0_4_ + *(float *)(lVar5 + 0xc + lVar1)) * fVar11;
                iVar3 = *(int *)(param_1 + 0x18);
                lVar5 = lVar5 + 0x20;
              } while (iVar6 < iVar3);
            }
            if (iVar3 != 0) {
              FUN_1806192c0(*(undefined8 *)(param_1 + 0x10),(longlong)iVar3,0x20,FUN_18042a370);
            }
            FUN_18042b2e0(local_4b8,lVar4 + 0x50,*(undefined4 *)(lVar4 + 0x60));
            local_4d0 = 0;
LAB_18042bb70:
            local_4d8 = local_4b8;
            FUN_18042acc0(param_1,auVar10._0_8_,auVar9._0_8_,auVar12._0_8_);
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 3);
      }
      lVar4 = *(longlong *)(lVar4 + 0x148);
    } while (lVar4 != 0);
  }
  FUN_18042b0e0(local_4c0,param_7,param_8,param_9);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
}



