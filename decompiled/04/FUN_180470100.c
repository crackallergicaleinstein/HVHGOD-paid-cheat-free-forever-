// FUN_180470100 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180470100 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180470100(longlong param_1,byte *param_2,uint param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_e8 [32];
  uint local_c8 [16];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 local_48;
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_88 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  iVar8 = 0;
  local_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  iVar7 = 0;
  FUN_18063ab10(param_1,0,0x400);
  if (0 < (int)param_3) {
    uVar6 = (ulonglong)param_3;
    pbVar3 = param_2;
    do {
      bVar1 = *pbVar3;
      pbVar3 = pbVar3 + 1;
      local_c8[(ulonglong)bVar1 + 0x10] = local_c8[(ulonglong)bVar1 + 0x10] + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  local_88 = local_88 & 0xffffffff00000000;
  uVar4 = 1;
  do {
    if (1 << (uVar4 & 0x1f) < (int)local_c8[(ulonglong)uVar4 + 0x10]) {
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 0x10);
  uVar4 = 0;
  uVar10 = 1;
  uVar11 = 0xf;
  while( true ) {
    lVar9 = (longlong)(int)uVar10;
    uVar2 = local_c8[lVar9 + 0x10];
    local_c8[lVar9] = uVar4;
    *(short *)(param_1 + 0x400 + lVar9 * 2) = (short)uVar4;
    iVar5 = uVar4 + uVar2;
    *(short *)(param_1 + 0x464 + lVar9 * 2) = (short)iVar7;
    if ((uVar2 != 0) && (1 << (uVar10 & 0x1f) <= iVar5 + -1)) break;
    uVar4 = iVar5 * 2;
    *(int *)(param_1 + 0x420 + lVar9 * 4) = iVar5 << (uVar11 & 0x1f);
    uVar11 = uVar11 - 1;
    iVar7 = iVar7 + uVar2;
    uVar10 = uVar10 + 1;
    if ((int)uVar11 < 1) {
      *(undefined4 *)(param_1 + 0x460) = 0x10000;
      if (0 < (int)param_3) {
        do {
          bVar1 = *param_2;
          uVar6 = (ulonglong)bVar1;
          if (bVar1 != 0) {
            uVar4 = local_c8[uVar6];
            lVar9 = (longlong)
                    (int)(uVar4 + ((uint)*(ushort *)(param_1 + 0x464 + uVar6 * 2) -
                                  (uint)*(ushort *)(param_1 + 0x400 + uVar6 * 2)));
            *(byte *)(lVar9 + 0x484 + param_1) = bVar1;
            *(ushort *)(param_1 + 0x5a4 + lVar9 * 2) = (ushort)iVar8;
            if (bVar1 < 10) {
              uVar10 = (int)uVar4 >> 1 & 0x5555U | (uVar4 & 0x5555) * 2;
              uVar10 = uVar10 >> 2 & 0x3333 | (uVar10 & 0x3333) << 2;
              uVar10 = uVar10 >> 4 & 0xf0f | (uVar10 & 0xf0f) << 4;
              iVar7 = (int)((uVar10 & 0xff) << 8 | uVar10 >> 8) >> (0x10 - bVar1 & 0x1f);
              if (iVar7 < 0x200) {
                do {
                  lVar9 = (longlong)iVar7;
                  iVar7 = iVar7 + (1 << (bVar1 & 0x1f));
                  *(ushort *)(param_1 + lVar9 * 2) = (ushort)bVar1 << 9 | (ushort)iVar8;
                } while (iVar7 < 0x200);
              }
            }
            local_c8[uVar6] = uVar4 + 1;
          }
          iVar8 = iVar8 + 1;
          param_2 = param_2 + 1;
        } while (iVar8 < (int)param_3);
      }
    }
  }
}



