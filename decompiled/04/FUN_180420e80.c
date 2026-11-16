// FUN_180420e80 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180420e80 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180420e80(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  byte bVar2;
  longlong lVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  undefined1 auStack_868 [32];
  undefined8 local_848 [256];
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_868;
  bVar2 = *param_1;
  iVar9 = 0;
  while ((bVar2 != 0 && (lVar3 = FUN_180606b00(&DAT_18081e618), lVar3 != 0))) {
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  bVar2 = *param_1;
  bVar10 = bVar2 != 0x2f;
  if (!bVar10) {
    bVar2 = param_1[1];
    param_1 = param_1 + 1;
  }
  bVar1 = !bVar10;
  if ((0x3f < bVar2) || ((0x8000000200000001U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
    pbVar5 = param_1;
    if (*param_1 != 0) {
      do {
        lVar3 = FUN_180606b00(&DAT_18081e618);
        if (lVar3 != 0) break;
        pbVar6 = pbVar5 + 1;
        pbVar5 = pbVar5 + 1;
      } while (*pbVar6 != 0);
      if (*pbVar5 != 0) {
        *pbVar5 = 0;
        pbVar5 = pbVar5 + 1;
      }
    }
    if (!bVar1) {
      lVar3 = 0;
      do {
        if ((*pbVar5 == 0) || (0xfc < lVar3)) break;
        do {
          lVar4 = FUN_180606b00(&DAT_18081e618);
          pbVar6 = pbVar5;
          if (lVar4 == 0) break;
          pbVar7 = pbVar5 + 1;
          pbVar5 = pbVar5 + 1;
          pbVar6 = pbVar5;
        } while (*pbVar7 != 0);
        if (*pbVar6 == 0) break;
        pbVar7 = pbVar6;
        if (*pbVar6 == 0x2f) {
          bVar1 = true;
          break;
        }
        do {
          lVar4 = FUN_180606b00(&DAT_18081e618);
          if ((lVar4 != 0) || (*pbVar7 == 0x3d)) break;
          pbVar5 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
        } while (*pbVar5 != 0);
        if (*pbVar7 != 0) {
          *pbVar7 = 0;
          pbVar7 = pbVar7 + 1;
          bVar2 = *pbVar7;
          while (((bVar2 != 0 && (bVar2 != 0x22)) && (bVar2 != 0x27))) {
            pbVar5 = pbVar7 + 1;
            pbVar7 = pbVar7 + 1;
            bVar2 = *pbVar5;
          }
        }
        if (*pbVar7 == 0) break;
        bVar2 = pbVar7[1];
        pbVar8 = pbVar7 + 1;
        pbVar5 = pbVar8;
        if (bVar2 != 0) {
          do {
            if (bVar2 == *pbVar7) break;
            bVar2 = pbVar5[1];
            pbVar5 = pbVar5 + 1;
          } while (bVar2 != 0);
          if (*pbVar5 != 0) {
            *pbVar5 = 0;
            pbVar5 = pbVar5 + 1;
          }
        }
        if ((pbVar6 != (byte *)0x0) && (pbVar8 != (byte *)0x0)) {
          local_848[lVar3] = pbVar6;
          iVar9 = iVar9 + 2;
          local_848[lVar3 + 1] = pbVar8;
          lVar3 = lVar3 + 2;
        }
      } while( true );
    }
    local_848[iVar9] = 0;
    local_848[(longlong)iVar9 + 1] = 0;
    if (bVar10) {
      FUN_180427460(param_4,param_1,local_848);
    }
    if (bVar1) {
      FUN_180427790(param_4,param_1);
    }
  }
}



