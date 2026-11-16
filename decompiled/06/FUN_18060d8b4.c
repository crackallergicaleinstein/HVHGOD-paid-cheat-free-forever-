// FUN_18060d8b4 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18060d8b4 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_18060d8b4(longlong param_1)

{
  int *piVar1;
  string_output_adapter<char> *this;
  undefined2 uVar2;
  uint uVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  char cVar10;
  longlong lVar11;
  int iVar12;
  undefined2 *puVar13;
  undefined1 auStackY_88 [32];
  undefined4 local_48;
  char local_40 [8];
  ulonglong local_38;
  
  local_38 = DAT_1808d5f00 ^ (ulonglong)auStackY_88;
  iVar7 = (int)*(char *)(param_1 + 0x39);
  cVar10 = 'x';
  if (iVar7 < 0x65) {
    if (iVar7 == 100) {
LAB_18060d986:
      *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x10;
LAB_18060d98a:
      cVar6 = FUN_18060bcac(param_1,0);
    }
    else if (iVar7 < 0x54) {
      if (iVar7 == 0x53) {
LAB_18060d9c9:
        cVar6 = FUN_18060e188();
      }
      else {
        if (iVar7 != 0x41) {
          if (iVar7 == 0x43) {
LAB_18060d949:
            cVar6 = FUN_18060dffc(param_1,0);
            goto LAB_18060d9e5;
          }
          if (((iVar7 != 0x45) && (iVar7 != 0x46)) && (iVar7 != 0x47)) {
          }
        }
LAB_18060d923:
        cVar6 = FUN_18060dda0();
      }
    }
    else {
      if (iVar7 == 0x58) goto LAB_18060d9de;
      if (iVar7 != 0x5a) {
        if (iVar7 != 0x61) {
          if (iVar7 != 99) {
          }
          goto LAB_18060d949;
        }
        goto LAB_18060d923;
      }
      cVar6 = FUN_18060dd24();
    }
  }
  else if (iVar7 < 0x70) {
    if (iVar7 == 0x6f) {
      if ((*(uint *)(param_1 + 0x28) >> 5 & 1) != 0) {
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0x28) | 0x80;
      }
      cVar6 = FUN_18060baa8(param_1,0);
    }
    else {
      if (((iVar7 == 0x65) || (iVar7 == 0x66)) || (iVar7 == 0x67)) goto LAB_18060d923;
      if (iVar7 == 0x69) goto LAB_18060d986;
      if (iVar7 != 0x6e) {
      }
      cVar6 = FUN_18060e0d0();
    }
  }
  else {
    if (iVar7 == 0x70) {
      *(undefined4 *)(param_1 + 0x30) = 0x10;
      *(undefined4 *)(param_1 + 0x34) = 0xb;
LAB_18060d9de:
      uVar9 = CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
    }
    else {
      if (iVar7 == 0x73) goto LAB_18060d9c9;
      if (iVar7 == 0x75) goto LAB_18060d98a;
      if (iVar7 != 0x78) {
      }
      uVar9 = 0;
    }
    cVar6 = FUN_18060beb0(param_1,uVar9);
  }
LAB_18060d9e5:
  if (cVar6 == '\0') {
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
  }
  local_48 = (uint)local_48._3_1_ << 0x18;
  lVar11 = 0;
  uVar3 = *(uint *)(param_1 + 0x28);
  if ((uVar3 >> 4 & 1) != 0) {
    if ((uVar3 >> 6 & 1) == 0) {
      if ((*(byte *)(param_1 + 0x28) & 1) == 0) {
        if ((uVar3 >> 1 & 1) == 0) goto LAB_18060da3f;
        local_48 = CONCAT31(local_48._1_3_,0x20);
      }
      else {
        local_48 = CONCAT31(local_48._1_3_,0x2b);
      }
    }
    else {
      local_48 = CONCAT31(local_48._1_3_,0x2d);
    }
    lVar11 = 1;
  }
LAB_18060da3f:
  cVar6 = *(char *)(param_1 + 0x39);
  if (((cVar6 + 0xa8U & 0xdf) == 0) && ((uVar3 >> 5 & 1) != 0)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if ((bVar5) || ((cVar6 + 0xbfU & 0xdf) == 0)) {
    local_40[lVar11 + -8] = '0';
    if ((cVar6 == 'X') || (cVar6 == 'A')) {
      cVar10 = 'X';
    }
    local_40[lVar11 + -7] = cVar10;
    lVar11 = lVar11 + 2;
  }
  iVar7 = (*(int *)(param_1 + 0x2c) - (int)lVar11) - *(int *)(param_1 + 0x48);
  if (((uVar3 & 0xc) == 0) && (iVar12 = 0, 0 < iVar7)) {
    iVar8 = *(int *)(param_1 + 0x20);
    do {
      lVar4 = *(longlong *)(param_1 + 0x460);
      if (*(longlong *)(lVar4 + 0x10) == *(longlong *)(lVar4 + 8)) {
        if (*(char *)(lVar4 + 0x18) == '\0') {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        *(int *)(param_1 + 0x20) = iVar8;
      }
      else {
        *(int *)(param_1 + 0x20) = iVar8 + 1;
        *(longlong *)(lVar4 + 0x10) = *(longlong *)(lVar4 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
        **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
      }
      iVar8 = *(int *)(param_1 + 0x20);
    } while ((iVar8 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar7));
  }
  this = (string_output_adapter<char> *)(param_1 + 0x460);
  piVar1 = (int *)(param_1 + 0x20);
  __crt_stdio_output::string_output_adapter<char>::write_string
            (this,(char *)&local_48,(int)lVar11,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8)
            );
  if (((*(uint *)(param_1 + 0x28) >> 3 & 1) != 0) &&
     (((*(uint *)(param_1 + 0x28) >> 2 & 1) == 0 && (iVar12 = 0, 0 < iVar7)))) {
    iVar8 = *piVar1;
    do {
      lVar11 = *(longlong *)this;
      if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
        if (*(char *)(lVar11 + 0x18) == '\0') {
          iVar8 = -1;
        }
        else {
          iVar8 = iVar8 + 1;
        }
        *piVar1 = iVar8;
      }
      else {
        *piVar1 = iVar8 + 1;
        *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
        *(undefined1 *)**(undefined8 **)this = 0x30;
        **(longlong **)this = **(longlong **)this + 1;
      }
      iVar8 = *piVar1;
    } while ((iVar8 != -1) && (iVar12 = iVar12 + 1, iVar12 < iVar7));
  }
  if ((*(char *)(param_1 + 0x4c) == '\0') || (*(int *)(param_1 + 0x48) < 1)) {
    __crt_stdio_output::string_output_adapter<char>::write_string
              (this,*(char **)(param_1 + 0x40),*(int *)(param_1 + 0x48),piVar1,
               *(__crt_deferred_errno_cache **)(param_1 + 8));
  }
  else {
    lVar11 = *(longlong *)(param_1 + 8);
    if (*(char *)(lVar11 + 0x28) == '\0') {
      FUN_18060e230(lVar11);
    }
    puVar13 = *(undefined2 **)(param_1 + 0x40);
    iVar12 = 0;
    if (*(int *)(*(longlong *)(lVar11 + 0x18) + 0xc) == 0xfde9) {
      local_40[0] = '\0';
      local_40[1] = '\0';
      local_40[2] = '\0';
      local_40[3] = '\0';
      local_40[4] = '\0';
      local_40[5] = '\0';
      local_40[6] = '\0';
      local_40[7] = '\0';
      if (*(int *)(param_1 + 0x48) != 0) {
        do {
          uVar2 = *puVar13;
          puVar13 = puVar13 + 1;
          lVar11 = FUN_180623fbc(&local_48,uVar2,local_40);
          if (lVar11 == -1) goto LAB_18060dc0a;
          __crt_stdio_output::string_output_adapter<char>::write_string
                    (this,(char *)&local_48,(int)lVar11,piVar1,
                     *(__crt_deferred_errno_cache **)(param_1 + 8));
          iVar12 = iVar12 + 1;
        } while (iVar12 != *(int *)(param_1 + 0x48));
      }
    }
    else if (*(int *)(param_1 + 0x48) != 0) {
      do {
        local_48 = 0;
        iVar8 = FUN_1806239f8(&local_48,local_40,6);
        if ((iVar8 != 0) || (local_48 == 0)) goto LAB_18060dc0a;
        __crt_stdio_output::string_output_adapter<char>::write_string
                  (this,local_40,local_48,piVar1,*(__crt_deferred_errno_cache **)(param_1 + 8));
        iVar12 = iVar12 + 1;
      } while (iVar12 != *(int *)(param_1 + 0x48));
    }
  }
LAB_18060dc88:
  iVar12 = *(int *)(param_1 + 0x20);
  if ((-1 < iVar12) && ((*(uint *)(param_1 + 0x28) >> 2 & 1) != 0)) {
    piVar1 = (int *)(param_1 + 0x20);
    iVar8 = 0;
    if (0 < iVar7) {
      do {
        lVar11 = *(longlong *)(param_1 + 0x460);
        if (*(longlong *)(lVar11 + 0x10) == *(longlong *)(lVar11 + 8)) {
          if (*(char *)(lVar11 + 0x18) == '\0') {
            iVar12 = -1;
          }
          else {
            iVar12 = iVar12 + 1;
          }
          *piVar1 = iVar12;
        }
        else {
          *piVar1 = iVar12 + 1;
          *(longlong *)(lVar11 + 0x10) = *(longlong *)(lVar11 + 0x10) + 1;
          *(undefined1 *)**(undefined8 **)(param_1 + 0x460) = 0x20;
          **(longlong **)(param_1 + 0x460) = **(longlong **)(param_1 + 0x460) + 1;
        }
        iVar12 = *piVar1;
      } while ((iVar12 != -1) && (iVar8 = iVar8 + 1, iVar8 < iVar7));
    }
  }
LAB_18060dc0a:
  *piVar1 = -1;
  goto LAB_18060dc88;
}



