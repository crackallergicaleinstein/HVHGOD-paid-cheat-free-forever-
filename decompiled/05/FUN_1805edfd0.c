// FUN_1805edfd0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805edfd0 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1805edfd0(uint *param_1,short *param_2,uint param_3,uint param_4)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 local_258;
  ushort local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)&local_258;
  bVar1 = (byte)param_4;
  uVar10 = 1 << (bVar1 & 0x1f);
  uVar8 = (ulonglong)(uVar10 - 1);
  if ((param_3 < 0x100) && (param_4 < 0xd)) {
    local_258 = CONCAT22(1,(short)param_4);
    uVar5 = 0;
    if (param_3 == 0xffffffff) {
      *param_1 = local_258;
    }
    else {
      puVar3 = local_248;
      do {
        uVar2 = *(ushort *)(((longlong)param_2 - (longlong)local_248) + (longlong)puVar3);
        if (uVar2 == 0xffff) {
          *(char *)((longlong)param_1 + uVar8 * 4 + 6) = (char)uVar5;
          uVar2 = 1;
          uVar8 = (ulonglong)((int)uVar8 - 1);
        }
        else if ((short)(1 << (bVar1 - 1 & 0x1f)) <= (short)uVar2) {
          local_258 = local_258 & 0xffff;
        }
        *puVar3 = uVar2;
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar5 < param_3 + 1);
      *param_1 = local_258;
      uVar9 = 0;
      uVar5 = 0;
      do {
        iVar6 = 0;
        if (0 < *param_2) {
          do {
            *(char *)((longlong)param_1 + (ulonglong)uVar5 * 4 + 6) = (char)uVar9;
            do {
              uVar5 = uVar5 + (uVar10 >> 1) + 3 + (uVar10 >> 3) & uVar10 - 1;
            } while ((uint)uVar8 < uVar5);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *param_2);
        }
        uVar9 = uVar9 + 1;
        param_2 = param_2 + 1;
      } while (uVar9 < param_3 + 1);
      if (uVar5 != 0) {
      }
    }
    if (uVar10 != 0) {
      uVar8 = (ulonglong)uVar10;
      pbVar7 = (byte *)((longlong)param_1 + 7);
      do {
        uVar2 = local_248[pbVar7[-1]];
        local_248[pbVar7[-1]] = uVar2 + 1;
        iVar6 = 0x1f;
        if (uVar2 != 0) {
          for (; uVar2 >> iVar6 == 0; iVar6 = iVar6 + -1) {
          }
        }
        cVar4 = '\0';
        if (uVar2 != 0) {
          cVar4 = (char)iVar6;
        }
        *pbVar7 = bVar1 - cVar4;
        *(ushort *)(pbVar7 + -3) = (uVar2 << (bVar1 - cVar4 & 0x1f)) - (short)uVar10;
        uVar8 = uVar8 - 1;
        pbVar7 = pbVar7 + 4;
      } while (uVar8 != 0);
    }
  }
}



