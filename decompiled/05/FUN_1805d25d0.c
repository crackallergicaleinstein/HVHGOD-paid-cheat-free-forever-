// FUN_1805d25d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805d25d0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805d25d0(longlong param_1,undefined1 param_2,int param_3,int param_4)

{
  short sVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_f8 [32];
  undefined1 local_d8;
  int aiStack_cc [33];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_f8;
  lVar9 = 0;
  local_d8 = param_2;
LAB_1805d260c:
  do {
    uVar6 = 0;
    *(undefined4 *)(param_1 + 0x38) = 0;
    uVar10 = 0xffffffff;
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(int *)(param_1 + 0x48) = *(int *)(param_1 + 4) * param_3;
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 4) * param_4;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x20) + -4;
    *(undefined2 *)(param_1 + 0x50) = 0;
    if (*(short *)(param_1 + 0x78) != 0) {
      uVar8 = uVar6;
      do {
        iVar5 = uVar10 + 1;
        *(undefined4 *)(param_1 + 0x70) = 0;
        *(undefined8 *)(param_1 + 0x68) = 0;
        uVar10 = (uint)*(ushort *)(uVar6 + *(longlong *)(param_1 + 0x90));
        cVar4 = FUN_1805d16c0(param_1,iVar5,uVar10);
        if (cVar4 != '\0') {
LAB_1805d2778:
          if (*(int *)(param_1 + 0x38) != 0x62) {
          }
          if (param_3 == param_4) {
          }
          aiStack_cc[lVar9 + 1] = param_3;
          lVar9 = lVar9 + 1;
          param_3 = (param_3 + param_4 >> 1) + 1;
          goto LAB_1805d260c;
        }
        if (*(longlong *)(param_1 + 0x68) != 0) {
          uVar7 = *(uint *)(param_1 + 0x44);
          if (((((uVar7 & *(int *)(param_1 + 4) - 1U) == 0) &&
               (*(int *)(param_1 + 0x48) <= (int)uVar7)) && ((int)uVar7 <= *(int *)(param_1 + 0x4c))
              ) && (((*(byte *)(*(longlong *)(param_1 + 0x58) + 0x1c) ^
                     *(byte *)(*(longlong *)(param_1 + 0x68) + 0x1c)) & 8) == 0)) {
            *(longlong *)(param_1 + 0x30) = *(longlong *)(param_1 + 0x30) + -4;
          }
          cVar4 = FUN_1805d1dc0(param_1);
          if (cVar4 != '\0') goto LAB_1805d2778;
          if (*(longlong *)(param_1 + 0x60) == 0) {
            *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_1 + 0x68);
          }
        }
        uVar7 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar7;
        uVar6 = uVar6 + 2;
      } while ((int)uVar7 < (int)(uint)*(ushort *)(param_1 + 0x78));
    }
    if (*(undefined8 **)(param_1 + 0x60) != (undefined8 *)0x0) {
      sVar1 = *(short *)(param_1 + 0x50);
      puVar2 = *(undefined8 **)(param_1 + 0x60);
      while (puVar3 = puVar2, sVar1 = sVar1 + -1, sVar1 != 0) {
        puVar2 = (undefined8 *)*puVar3;
        if (puVar2[1] == puVar3[1]) {
          puVar3[1] = puVar2;
        }
      }
      *puVar3 = 0;
      if (*(longlong *)(param_1 + 0x60) != 0) {
        FUN_1805d1a00(param_1);
      }
    }
    if (lVar9 + -1 < 0) {
    }
    param_4 = param_3 + -1;
    param_3 = aiStack_cc[lVar9];
    lVar9 = lVar9 + -1;
  } while( true );
}



