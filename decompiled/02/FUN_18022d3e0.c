// FUN_18022d3e0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18022d3e0 */

ulonglong FUN_18022d3e0(ulonglong *param_1,int *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  ulonglong in_RAX;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  longlong local_res10;
  
  if ((*(char *)((longlong)param_2 + 0x21) != '\0') && (*param_2 == 0)) {
    in_RAX = *param_1;
    iVar9 = *(int *)(in_RAX + 0x10);
    if ((iVar9 == param_2[4]) && (iVar9 < 0x41)) {
      iVar6 = 0;
      if (0 < iVar9) {
        iVar9 = 0;
        lVar7 = local_res10;
        lVar8 = local_res10;
        do {
          lVar5 = *(longlong *)(in_RAX + 0x18);
          lVar4 = FUN_18017ea70();
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          lVar5 = lVar5 + iVar9;
          if (lVar5 == 0) {
            bVar1 = false;
          }
          else {
            local_res10 = 0;
            cVar3 = FUN_1804514f0(&local_res10,lVar5,8);
            if (cVar3 == '\0') {
              bVar1 = false;
            }
            else {
              bVar1 = true;
              lVar7 = local_res10;
            }
          }
          lVar5 = FUN_18017ea70();
          if (*(int *)(lVar5 + 4) != 0) {
            *(int *)(lVar5 + 4) = *(int *)(lVar5 + 4) + -1;
          }
          lVar5 = *(longlong *)(param_2 + 6);
          lVar4 = FUN_18017ea70();
          *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
          lVar5 = lVar5 + iVar9;
          bVar2 = false;
          if (lVar5 != 0) {
            local_res10 = 0;
            cVar3 = FUN_1804514f0(&local_res10,lVar5,8);
            if (cVar3 == '\0') {
              bVar2 = false;
            }
            else {
              bVar2 = true;
              lVar8 = local_res10;
            }
          }
          in_RAX = FUN_18017ea70();
          if (*(int *)(in_RAX + 4) != 0) {
            *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) + -1;
          }
          if ((((!bVar1) || (lVar7 == 0)) || (!bVar2)) || (lVar7 != lVar8)) goto LAB_18022d514;
          iVar6 = iVar6 + 1;
          iVar9 = iVar9 + 8;
          in_RAX = *param_1;
        } while (iVar6 < *(int *)(in_RAX + 0x10));
      }
      return CONCAT71((int7)(in_RAX >> 8),1);
    }
  }
LAB_18022d514:
  return in_RAX & 0xffffffffffffff00;
}



