// FUN_18044e620 - decompiled reference (Ghidra). Not original source, does not compile.

/* 18044e620 */

undefined8 FUN_18044e620(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *local_68;
  longlong local_60;
  longlong local_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined8 uStack_10;
  
  plVar6 = (longlong *)*param_1;
  plVar1 = (longlong *)param_1[1];
  plVar5 = plVar6;
  if (plVar6 != plVar1) {
    do {
      if ((*plVar5 == 0) || (plVar5[1] == 0)) {
        local_28 = 0xdb35e39b27e1c185;
        uStack_20 = 0xa05181ee77d57a06;
        local_18 = 0x929654b1461b7377;
        uStack_10 = 0xa5cea54bfef7110;
        local_38 = 0x7d7b203a7972;
        uStack_30 = 0;
        local_48 = 0x2064696c61766e69;
        uStack_40 = 0x746e65206b6f6f68;
        lVar4 = -1;
        do {
          local_60 = lVar4 + 1;
          lVar2 = lVar4 + 1;
          lVar4 = local_60;
        } while (*(char *)((longlong)&local_48 + lVar2) != '\0');
        local_68 = &local_48;
        FUN_1803825d0(&local_68,plVar5 + 2);
        return 0;
      }
      if (plVar5[3] == 0) {
        local_28 = 0xdb35e39b27e1c185;
        uStack_20 = 0xa05181ee77d57a06;
        local_18 = 0x929654b1461b7377;
        uStack_10 = 0xa5cea54bfef7110;
        local_38 = 0x7d7b;
        uStack_30 = 0;
        local_48 = 0x742064656c696166;
        uStack_40 = 0x203a6b6f6f68206f;
        lVar4 = -1;
        do {
          local_60 = lVar4 + 1;
          lVar2 = lVar4 + 1;
          lVar4 = local_60;
        } while (*(char *)((longlong)&local_48 + lVar2) != '\0');
        local_68 = &local_48;
        FUN_1803825d0(&local_68,plVar5 + 2);
        return 0;
      }
      plVar5 = plVar5 + 4;
    } while (plVar5 != plVar1);
    do {
      cVar3 = FUN_18044dad0(*plVar6,plVar6[3],plVar6[1]);
      if (cVar3 == '\0') {
        local_28 = 0xdb35e39b27e1c185;
        uStack_20 = 0xa05181ee77d57a06;
        local_18 = 0x929654b1461b7377;
        uStack_10 = 0xa5cea54bfef7110;
        local_38 = 0x7d7b;
        uStack_30 = 0;
        local_48 = 0x742064656c696166;
        uStack_40 = 0x203a6b6f6f68206f;
        lVar4 = -1;
        do {
          local_60 = lVar4 + 1;
          lVar2 = lVar4 + 1;
          lVar4 = local_60;
        } while (*(char *)((longlong)&local_48 + lVar2) != '\0');
        local_68 = &local_48;
        FUN_1803825d0(&local_68,plVar6 + 2);
        plVar6 = (longlong *)param_1[1];
        for (param_1 = (longlong *)*param_1; param_1 != plVar6; param_1 = param_1 + 4) {
          if (*param_1 != 0) {
            FUN_18044e4e0();
          }
        }
        return 0;
      }
      cVar3 = FUN_18044e180(*plVar6);
      plVar5 = DAT_180c62c10;
      if (cVar3 == '\0') {
        local_28 = 0xdb35e39b27e1c185;
        uStack_20 = 0xa05181ee77d57a06;
        local_18 = 0x929654b1461b7377;
        uStack_10 = 0xa5cea54bfef7110;
        local_38 = 0x7b203a6b6f6f6820;
        uStack_30 = 0x7d;
        local_48 = 0x742064656c696166;
        uStack_40 = 0x656c62616e65206f;
        lVar4 = -1;
        do {
          local_60 = lVar4 + 1;
          lVar2 = lVar4 + 1;
          lVar4 = local_60;
        } while (*(char *)((longlong)&local_48 + lVar2) != '\0');
        local_68 = &local_48;
        FUN_1803825d0(&local_68,plVar6 + 2);
        plVar6 = (longlong *)param_1[1];
        param_1 = (longlong *)*param_1;
        if (param_1 == plVar6) {
          return 0;
        }
        do {
          if (*param_1 != 0) {
            FUN_18044e4e0();
          }
          param_1 = param_1 + 4;
        } while (param_1 != plVar6);
        return 0;
      }
      local_68 = (undefined8 *)plVar6[3];
      local_58 = *(longlong *)(*plVar6 + 0x48);
      local_60 = *plVar6 + 0x18;
      if (DAT_180c62c10 == DAT_180c62c18) {
        FUN_180454b40(local_68,DAT_180c62c10,&local_68);
      }
      else {
        *DAT_180c62c10 = (longlong)local_68;
        plVar5[1] = local_60;
        plVar5[2] = local_58;
        DAT_180c62c10 = DAT_180c62c10 + 3;
      }
      plVar6 = plVar6 + 4;
    } while (plVar6 != plVar1);
  }
  return 1;
}



