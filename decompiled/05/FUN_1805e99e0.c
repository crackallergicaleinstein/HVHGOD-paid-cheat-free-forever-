// FUN_1805e99e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805e99e0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805e99e0(undefined4 *param_1,longlong param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  ushort uVar8;
  uint uVar9;
  ulonglong uVar10;
  byte *pbVar11;
  ulonglong uVar12;
  undefined1 auStack_288 [32];
  undefined4 local_268;
  uint local_264;
  uint local_25c;
  uint local_258;
  undefined4 *local_250;
  ushort local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_288;
  uVar12 = 0;
  local_268 = 1;
  local_258 = 1 << ((byte)param_4 & 0x1f);
  uVar4 = local_258 >> 3;
  local_25c = local_258 - 1;
  uVar2 = local_258 >> 1;
  uVar10 = (ulonglong)local_25c;
  if ((param_3 < 0x100) && (param_4 < 0xd)) {
    local_264 = param_4;
    local_250 = param_1;
    FUN_18063ab10(param_1 + 1,0,param_3 + 1);
    uVar5 = 0;
    do {
      uVar3 = (ulonglong)uVar5;
      uVar8 = *(ushort *)(uVar3 * 2 + param_2);
      if (uVar8 == 0xffff) {
        uVar8 = 1;
        *(char *)((longlong)param_1 + uVar10 * 4 + 6) = (char)uVar5;
        uVar10 = (ulonglong)((int)uVar10 - 1);
      }
      else {
        uVar1 = 0;
        if ((short)uVar8 < (short)(1 << ((byte)param_4 - 1 & 0x1f))) {
          uVar1 = local_268;
        }
        local_268 = uVar1;
      }
      uVar5 = uVar5 + 1;
      local_248[uVar3] = uVar8;
    } while (uVar5 <= param_3);
    uVar5 = 0;
    do {
      iVar6 = 0;
      if (0 < *(short *)(param_2 + (ulonglong)uVar5 * 2)) {
        do {
          *(char *)((longlong)param_1 + uVar12 * 4 + 6) = (char)uVar5;
          uVar9 = (uint)uVar12;
          do {
            uVar9 = uVar9 + uVar2 + 3 + uVar4 & local_25c;
            uVar12 = (ulonglong)uVar9;
          } while ((uint)uVar10 < uVar9);
          iVar6 = iVar6 + 1;
        } while (iVar6 < *(short *)(param_2 + (ulonglong)uVar5 * 2));
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= param_3);
    if ((int)uVar12 == 0) {
      if (local_258 != 0) {
        uVar12 = (ulonglong)local_258;
        pbVar11 = (byte *)((longlong)param_1 + 7);
        do {
          uVar8 = local_248[pbVar11[-1]];
          local_248[pbVar11[-1]] = uVar8 + 1;
          iVar6 = 0x1f;
          if (uVar8 != 0) {
            for (; uVar8 >> iVar6 == 0; iVar6 = iVar6 + -1) {
            }
          }
          cVar7 = '\0';
          if (uVar8 != 0) {
            cVar7 = (char)iVar6;
          }
          *pbVar11 = (char)local_264 - cVar7;
          *(ushort *)(pbVar11 + -3) =
               (uVar8 << ((char)local_264 - cVar7 & 0x1fU)) - (short)local_258;
          uVar12 = uVar12 - 1;
          pbVar11 = pbVar11 + 4;
        } while (uVar12 != 0);
      }
      *local_250 = CONCAT22((short)local_268,(short)local_264);
    }
  }
}



