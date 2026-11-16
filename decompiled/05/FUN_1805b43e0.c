// FUN_1805b43e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805b43e0 */

/* WARNING: Type propagation algorithm not settling */

int FUN_1805b43e0(ulonglong *param_1,byte *param_2,int param_3)

{
  byte *pbVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *pbVar9;
  bool bVar10;
  byte *local_res20;
  
  iVar5 = 0;
  local_res20 = (byte *)*param_1;
  bVar2 = false;
  bVar3 = false;
  bVar10 = false;
  iVar8 = 0;
  iVar7 = 1;
  if (local_res20 < param_2) {
    bVar4 = *local_res20;
    if ((bVar4 == 0x2d) || (bVar4 == 0x2b)) {
      bVar10 = bVar4 == 0x2d;
      local_res20 = local_res20 + 1;
      if (local_res20 == param_2) {
        return 0;
      }
      bVar4 = *local_res20;
      if (bVar4 == 0x2d) {
        return 0;
      }
      if (bVar4 == 0x2b) {
        return 0;
      }
    }
    pbVar9 = local_res20;
    if (bVar4 != 0x2e) {
      iVar5 = FUN_1805b4660(&local_res20);
      if (local_res20 == pbVar9) {
        return 0;
      }
      if (iVar5 < 0x8000) {
        iVar5 = iVar5 << 0x10;
      }
      else {
        bVar2 = true;
      }
    }
    pbVar9 = local_res20;
    if ((local_res20 < param_2) && (*local_res20 == 0x2e)) {
      while (((pbVar9 = pbVar9 + 1, pbVar9 < param_2 && (bVar4 = *pbVar9, bVar4 != 0x20)) &&
             ((((0xd < bVar4 || ((0x3601U >> (bVar4 & 0x1f) & 1) == 0)) && (bVar4 < 0x80)) &&
              ((byte)(&DAT_1806750d0)[bVar4 & 0x7f] < 10))))) {
        if ((iVar7 < 0xccccccc) && (iVar8 < 0xccccccc)) {
          iVar8 = (int)(char)(&DAT_1806750d0)[bVar4 & 0x7f] + iVar8 * 10;
          if ((iVar5 == 0) && (0 < param_3)) {
            param_3 = param_3 + -1;
          }
          else {
            iVar7 = iVar7 * 10;
          }
        }
      }
    }
    pbVar1 = pbVar9 + 1;
    if ((pbVar1 < param_2) && ((*pbVar9 == 0x65 || (*pbVar9 == 0x45)))) {
      local_res20 = pbVar1;
      iVar6 = FUN_1805b4660(&local_res20,param_2);
      if (pbVar1 == local_res20) {
        return 0;
      }
      pbVar9 = local_res20;
      if (iVar6 < 0x3e9) {
        if (iVar6 < -1000) {
          bVar3 = true;
        }
        else {
          param_3 = param_3 + iVar6;
        }
      }
      else {
        bVar2 = true;
      }
    }
    *param_1 = (ulonglong)pbVar9;
    if ((iVar5 != 0) || (iVar8 != 0)) {
      if (bVar2) {
LAB_1805b462f:
        iVar5 = 0x7fffffff;
      }
      else {
        if (bVar3) {
          return 0;
        }
        for (; 0 < param_3; param_3 = param_3 + -1) {
          if (0xccccccb < iVar5) goto LAB_1805b462f;
          iVar5 = iVar5 * 10;
          if (iVar8 < 0xccccccc) {
            iVar8 = iVar8 * 10;
          }
          else {
            if (iVar7 == 1) goto LAB_1805b462f;
            iVar7 = iVar7 / 10;
          }
        }
        for (; param_3 < 0; param_3 = param_3 + 1) {
          iVar5 = iVar5 / 10;
          if (iVar7 < 0xccccccc) {
            iVar7 = iVar7 * 10;
          }
          else {
            iVar8 = iVar8 / 10;
          }
          if ((iVar5 == 0) && (iVar8 == 0)) {
            return 0;
          }
        }
        if (iVar8 != 0) {
          iVar7 = FUN_180573310(iVar8,iVar7);
          iVar8 = -(iVar5 + iVar7);
          if (!bVar10) {
            iVar8 = iVar5 + iVar7;
          }
          return iVar8;
        }
      }
      if (bVar10) {
        return -iVar5;
      }
      return iVar5;
    }
  }
  return 0;
}



