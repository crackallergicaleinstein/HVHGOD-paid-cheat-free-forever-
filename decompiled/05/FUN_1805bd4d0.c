// FUN_1805bd4d0 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1805bd4d0 */

int FUN_1805bd4d0(undefined8 *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *local_res8;
  
  local_res8 = (byte *)*param_1;
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 <= local_res8) {
    *param_1 = local_res8;
    return 0;
  }
  do {
    bVar1 = *local_res8;
    if (bVar1 == 0x25) {
      for (; ((local_res8 < param_2 && (*local_res8 != 0xd)) && (*local_res8 != 10));
          local_res8 = local_res8 + 1) {
      }
    }
    else if (bVar1 == 0x28) {
      iVar2 = FUN_1805bd3b0(&local_res8,param_2);
    }
    else if (bVar1 == 0x3c) {
      iVar2 = 0;
      do {
        local_res8 = local_res8 + 1;
        if (param_2 <= local_res8) goto LAB_1805bd5cd;
        do {
          bVar1 = *local_res8;
          if ((bVar1 != 0x20) && ((0xd < bVar1 || ((0x3601U >> (bVar1 & 0x1f) & 1) == 0)))) {
            if (bVar1 != 0x25) break;
            do {
              if ((*local_res8 == 0xd) || (*local_res8 == 10)) break;
              local_res8 = local_res8 + 1;
            } while (local_res8 < param_2);
          }
          local_res8 = local_res8 + 1;
        } while (local_res8 < param_2);
        if (param_2 <= local_res8) goto LAB_1805bd5cd;
        bVar1 = *local_res8;
      } while ((((0x2f < bVar1) && (bVar1 < 0x3a)) || ((byte)(bVar1 + 0xbf) < 6)) ||
              ((byte)(bVar1 + 0x9f) < 6));
      if (bVar1 == 0x3e) {
LAB_1805bd5cd:
        local_res8 = local_res8 + 1;
      }
      else {
        iVar2 = 3;
      }
    }
    else if (bVar1 == 0x7b) {
      iVar3 = iVar3 + 1;
    }
    else if ((bVar1 == 0x7d) && (iVar3 = iVar3 + -1, iVar3 == 0)) {
      local_res8 = local_res8 + 1;
      goto LAB_1805bd540;
    }
    local_res8 = local_res8 + 1;
  } while ((local_res8 < param_2) && (iVar2 == 0));
  if (iVar3 != 0) {
    iVar2 = 3;
  }
LAB_1805bd540:
  *param_1 = local_res8;
  return iVar2;
}



