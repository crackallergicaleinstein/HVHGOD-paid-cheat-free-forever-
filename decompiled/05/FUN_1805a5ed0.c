// FUN_1805a5ed0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805a5ed0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805a5ed0(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  int *piVar8;
  longlong lVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_98 [32];
  undefined4 local_78;
  uint local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = DAT_1808d5f00 ^ (ulonglong)auStack_98;
  local_60 = *(longlong *)(param_1 + 8);
  uVar4 = param_3 - 1;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  if ((((local_60 != 0) && (uVar4 < *(uint *)(local_60 + 0x218))) &&
      ((local_68 = param_4, local_58 = param_2, (param_4 & 9) != 0 ||
       (iVar3 = FUN_1805a8440(param_1,param_2,uVar4,
                              CONCAT31((uint3)(param_4 >> 0x1e),(char)(param_4 >> 0x16)) &
                              0xffffff01), iVar3 != 0)))) && ((param_4 >> 0xe & 1) == 0)) {
    uVar2 = *(undefined8 *)(local_60 + 0xa0);
    local_50 = *(longlong *)(local_60 + 0x228) + (ulonglong)uVar4 * 0x10;
    uVar5 = *(undefined4 *)(local_60 + 0x110);
    uVar6 = *(undefined4 *)(local_50 + 8);
    uVar1 = *(undefined4 *)(local_50 + 0xc);
    FUN_1805743a0(*(undefined8 *)(param_1 + 0x120));
    iVar11 = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    local_78 = uVar6;
    iVar3 = FUN_1805a6ea0(param_1 + 0xf8,uVar2,uVar5,uVar1);
    lVar10 = local_58;
    lVar9 = local_60;
    if (iVar3 == 0) {
      lVar7 = *(longlong *)(param_1 + 0x120);
      *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      *(undefined8 *)(param_1 + 0x98) = *(undefined8 *)(lVar7 + 0x18);
      *(undefined8 *)(param_1 + 0xa0) = uVar2;
      uVar5 = *(undefined4 *)(lVar7 + 0x2c);
      uVar6 = *(undefined4 *)(lVar7 + 0x30);
      uVar1 = *(undefined4 *)(lVar7 + 0x34);
      *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(lVar7 + 0x28);
      *(undefined4 *)(param_1 + 0xac) = uVar5;
      *(undefined4 *)(param_1 + 0xb0) = uVar6;
      *(undefined4 *)(param_1 + 0xb4) = uVar1;
      *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar7 + 0x38);
      uVar4 = *(uint *)(param_1 + 0xb8) & 0xfffffffe;
      *(uint *)(param_1 + 0xb8) = uVar4 | 4;
      if (*(ushort *)(local_58 + 0x1a) < 0x18) {
        *(uint *)(param_1 + 0xb8) = uVar4 | 0x104;
      }
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x4c) = 0;
      uVar5 = *(undefined4 *)(local_50 + 4);
      if (*(int *)(local_60 + 0x18c) != *(int *)(local_60 + 0x188)) {
        uVar5 = FUN_1805753e0(uVar5);
        uVar6 = *(undefined4 *)(param_1 + 0x40);
      }
      if ((*(byte *)(lVar9 + 0x1a0) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x40) = uVar5;
      }
      else {
        *(undefined4 *)(param_1 + 0x4c) = uVar5;
        uVar5 = uVar6;
      }
      *(undefined4 *)(param_1 + 0x50) = uVar5;
      *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined8 *)(param_1 + 0x44) = 0;
      if ((local_68 & 1) == 0) {
        piVar8 = *(int **)(param_1 + 0xa0);
        lVar9 = (longlong)*(int *)(lVar10 + 0x1c);
        lVar10 = (longlong)*(int *)(lVar10 + 0x20);
        if (*(short *)(param_1 + 0x9a) != 0) {
          do {
            lVar7 = *piVar8 * lVar9;
            iVar11 = iVar11 + 1;
            *piVar8 = (int)((ulonglong)(lVar7 + (lVar7 >> 0x3f) + 0x8000) >> 0x10);
            lVar7 = piVar8[1] * lVar10;
            piVar8[1] = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
            piVar8 = piVar8 + 2;
          } while (iVar11 < (int)(uint)*(ushort *)(param_1 + 0x9a));
        }
        lVar9 = *(int *)(param_1 + 0x40) * lVar9;
        *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
        lVar10 = *(int *)(param_1 + 0x4c) * lVar10;
        *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
      }
      FUN_180576310((undefined8 *)(param_1 + 0x98),&local_50);
      *(int *)(param_1 + 0x38) = (int)local_50;
      *(int *)(param_1 + 0x30) = local_48 - (int)local_50;
      *(int *)(param_1 + 0x34) = local_44 - local_50._4_4_;
      *(int *)(param_1 + 0x3c) = local_44 - (local_44 - local_50._4_4_);
    }
  }
}



