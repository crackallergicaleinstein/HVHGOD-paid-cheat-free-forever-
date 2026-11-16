// FUN_1800cfe90 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1800cfe90 */

char * FUN_1800cfe90(longlong param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong *plVar9;
  undefined1 local_98 [16];
  undefined4 local_88;
  undefined8 local_80;
  char *local_78;
  undefined1 local_70 [56];
  undefined1 local_38 [32];
  
  local_88 = 0;
  local_98 = (undefined1  [16])0x0;
  local_78 = param_2;
  FUN_1800f4e90(param_2,local_98,0,2);
  local_88 = 3;
  plVar9 = (longlong *)**(longlong **)(param_1 + 8);
  cVar1 = *(char *)((longlong)plVar9 + 0x19);
  do {
    if (cVar1 != '\0') {
      return param_2;
    }
    uVar2 = *(undefined4 *)((longlong)plVar9 + 0x1c);
    local_98 = ZEXT816(0);
    FUN_1801409d0(local_98 + 8,0);
    local_98[0] = 6;
    local_98._8_4_ = uVar2;
    local_98._12_4_ = 0;
    if (*param_2 == '\0') {
      *param_2 = '\x02';
      FUN_180111d10(&local_80,2);
      *(undefined8 *)(param_2 + 8) = local_80;
    }
    else if (*param_2 != '\x02') {
      local_80 = FUN_180112a50(param_2);
      uVar7 = FUN_1800f6bd0(local_38,"cannot use push_back() with ",&local_80);
      FUN_1800f6ca0(local_70,0x134,uVar7);
                    /* WARNING: Subroutine does not return */
      FUN_180606630(local_70,&DAT_1808d1050);
    }
    lVar3 = *(longlong *)(param_2 + 8);
    puVar4 = *(undefined8 **)(lVar3 + 8);
    if (puVar4 == *(undefined8 **)(lVar3 + 0x10)) {
      FUN_18014fc20(lVar3,puVar4,local_98);
      uVar8 = (ulonglong)local_98[0];
    }
    else {
      *puVar4 = local_98._0_8_;
      puVar4[1] = local_98._8_8_;
      uVar8 = (ulonglong)puVar4 & 0xffffffffffffff00;
      local_98._0_8_ = local_98._1_8_ << 8;
      local_98._8_8_ = 0;
      *(longlong *)(lVar3 + 8) = *(longlong *)(lVar3 + 8) + 0x10;
    }
    FUN_1801409d0(local_98 + 8,uVar8);
    plVar5 = (longlong *)plVar9[2];
    if (*(char *)((longlong)plVar5 + 0x19) == '\0') {
      cVar1 = *(char *)(*plVar5 + 0x19);
      plVar9 = plVar5;
      plVar5 = (longlong *)*plVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*plVar5 + 0x19);
        plVar9 = plVar5;
        plVar5 = (longlong *)*plVar5;
      }
    }
    else {
      cVar1 = *(char *)(plVar9[1] + 0x19);
      plVar6 = (longlong *)plVar9[1];
      plVar5 = plVar9;
      while ((plVar9 = plVar6, cVar1 == '\0' && (plVar5 == (longlong *)plVar9[2]))) {
        cVar1 = *(char *)(plVar9[1] + 0x19);
        plVar6 = (longlong *)plVar9[1];
        plVar5 = plVar9;
      }
    }
    cVar1 = *(char *)((longlong)plVar9 + 0x19);
  } while( true );
}



