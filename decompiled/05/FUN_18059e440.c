// FUN_18059e440 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18059e440 */

int FUN_18059e440(longlong param_1,ushort *param_2)

{
  byte bVar1;
  longlong lVar2;
  ushort uVar3;
  ushort *puVar4;
  longlong lVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  int local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x3e0);
  local_res8[0] = 0;
  if (lVar2 == 0) {
    return 0;
  }
  puVar4 = *(ushort **)(lVar2 + 0x1130);
  iVar8 = 0;
  if (puVar4 == (ushort *)0x0) {
    puVar4 = (ushort *)FUN_18057abe0(*(undefined8 *)(param_1 + 0x98),2,local_res8);
    if (local_res8[0] != 0) {
      return local_res8[0];
    }
    *puVar4 = 0;
    lVar5 = FUN_1805a0c60(lVar2,*(undefined4 *)(lVar2 + 0x65c));
    if ((lVar5 != 0) && (lVar5 = FUN_180606b80(lVar5,"/FSType"), lVar5 != 0)) {
      pbVar7 = (byte *)(lVar5 + 7);
      pbVar6 = (byte *)FUN_180606b80(pbVar7,&DAT_180671e50);
      if (pbVar6 != (byte *)0x0) {
        for (; pbVar7 != pbVar6; pbVar7 = pbVar7 + 1) {
          bVar1 = *pbVar7;
          if ((char)bVar1 < '0') {
            if ((0x20 < bVar1) || ((0x100002400U >> ((longlong)(char)bVar1 & 0x3fU) & 1) == 0))
            goto LAB_18059e54b;
          }
          else {
            if (('9' < (char)bVar1) || (0x1997 < *puVar4)) {
LAB_18059e54b:
              *puVar4 = 0;
              break;
            }
            uVar3 = *puVar4 * 10;
            *puVar4 = uVar3;
            *puVar4 = (char)*pbVar7 + -0x30 + uVar3;
          }
        }
      }
    }
    *(ushort **)(lVar2 + 0x1130) = puVar4;
    iVar8 = local_res8[0];
  }
  *param_2 = *puVar4;
  return iVar8;
}



