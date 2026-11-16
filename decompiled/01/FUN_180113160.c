// FUN_180113160 - decompiled reference (Ghidra). Not original source, does not compile.

/* 180113160 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_180113160(char *param_1,undefined8 *param_2,undefined8 *param_3,char param_4)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  longlong *plVar3;
  longlong *plVar4;
  char *pcVar5;
  longlong lVar6;
  char cVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  longlong *plVar12;
  undefined1 auStack_e8 [32];
  char local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [56];
  undefined1 *local_80;
  undefined1 local_78 [16];
  char *local_68;
  longlong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_1808d5f00 ^ (ulonglong)auStack_e8;
  local_c8 = param_4;
  local_c0 = param_3;
  if (*param_1 == '\0') {
    *param_1 = '\x01';
    uVar8 = FUN_18010f2c0();
    *(undefined8 *)(param_1 + 8) = uVar8;
  }
  if (*param_1 != '\x01') {
    local_c0 = (undefined8 *)FUN_180112a50(param_1);
    uVar8 = FUN_18013f9b0(&local_68);
    FUN_1800f6ca0(local_b8,0x138,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_b8,&DAT_1808d1050);
  }
  local_68 = (char *)*param_2;
  if (local_68 != (char *)*local_c0) {
    FUN_18015bae0(&local_68,"iterators do not fit");
    FUN_1800f6e80(local_b8,0xd2,&local_68);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_b8,&DAT_1808d0fe8);
  }
  if (*local_68 != '\x01') {
    local_c0 = (undefined8 *)FUN_180112a50(local_68);
    uVar8 = FUN_18013f9b0(&local_68);
    FUN_1800f6ca0(local_b8,0x138,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_180606630(local_b8,&DAT_1808d1050);
  }
  local_60 = param_2[1];
  uStack_58 = param_2[2];
  local_50 = param_2[3];
  cVar7 = FUN_1800e6ca0(&local_68,local_c0);
  if (cVar7 != '\0') {
  }
  do {
    lVar6 = local_60;
    pcVar5 = local_68;
    if ((param_4 == '\0') || (pcVar9 = (char *)FUN_1800f3560(&local_68), *pcVar9 != '\x01')) {
LAB_1801132b2:
      local_80 = local_78;
      uVar8 = FUN_1800f3560(&local_68);
      puVar10 = (undefined1 *)FUN_1800f4a50(local_78,uVar8);
      if (*pcVar5 != '\x01') {
        FUN_18015bae0(&local_68,"cannot use key() for non-object iterators");
        FUN_1800f6e80(local_b8,0xcf,&local_68);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_b8,&DAT_1808d0fe8);
      }
      puVar11 = (undefined1 *)FUN_180140e40(*(undefined8 *)(param_1 + 8),lVar6 + 0x20);
      uVar2 = *puVar11;
      *puVar11 = *puVar10;
      *puVar10 = uVar2;
      uVar8 = *(undefined8 *)(puVar11 + 8);
      puVar1 = (undefined8 *)(puVar10 + 8);
      *(undefined8 *)(puVar11 + 8) = *puVar1;
      *puVar1 = uVar8;
      FUN_1801409d0(puVar1,*puVar10);
    }
    else {
      if (*pcVar5 != '\x01') {
        FUN_18015bae0(&local_68,"cannot use key() for non-object iterators");
        FUN_1800f6e80(local_b8,0xcf,&local_68);
                    /* WARNING: Subroutine does not return */
        FUN_180606630(local_b8,&DAT_1808d0fe8);
      }
      plVar3 = (longlong *)**(longlong **)(param_1 + 8);
      plVar12 = (longlong *)plVar3[1];
      cVar7 = *(char *)((longlong)plVar12 + 0x19);
      plVar4 = plVar3;
      while (cVar7 == '\0') {
        cVar7 = FUN_180114040(plVar12 + 4,lVar6 + 0x20);
        if (cVar7 < '\0') {
          plVar12 = plVar12 + 2;
        }
        else {
          plVar4 = plVar12;
        }
        plVar12 = (longlong *)*plVar12;
        cVar7 = *(char *)((longlong)plVar12 + 0x19);
      }
      if (((*(char *)((longlong)plVar4 + 0x19) != '\0') ||
          (cVar7 = FUN_180114040(lVar6 + 0x20,plVar4 + 4), cVar7 < '\0')) || (plVar4 == plVar3))
      goto LAB_1801132b2;
      uVar8 = FUN_1800f3560(&local_68);
      FUN_1800f3a50(plVar4 + 8,uVar8,1);
    }
    FUN_1800f33e0(&local_68);
    cVar7 = FUN_1800e6ca0(&local_68,local_c0);
    if (cVar7 != '\0') {
    }
    param_4 = local_c8;
  } while( true );
}



