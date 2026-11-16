// FUN_1802be400 - decompiled reference (Ghidra). Not original source, does not compile.

/* 1802be400 */

void FUN_1802be400(void)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  char cVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulonglong uVar8;
  char **ppcVar9;
  byte bVar10;
  longlong lVar11;
  ulonglong uVar12;
  longlong lVar13;
  undefined8 uVar14;
  undefined1 local_148 [16];
  undefined1 auStack_138 [16];
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 local_f8 [16];
  undefined8 uStack_e8;
  ulonglong uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  char *local_b8;
  ulonglong uStack_b0;
  char *local_a8;
  undefined1 *puStack_a0;
  char local_98 [80];
  char *local_48;
  undefined1 *puStack_40;
  
  lVar11 = DAT_180bb83c0;
  if (DAT_180b8fb30 != '\0') {
    return;
  }
  if (DAT_180bb83c0 == 0) {
    local_f8._8_8_ = 0xa05181ee77d57a06;
    local_f8._0_8_ = 0xdb35e39b27e1c185;
    uStack_e8 = 0x929654b1461b7377;
    uStack_e0 = 0xa5cea54bfef7110;
    local_d8 = 0xa70c9f7f916b7e19;
    uStack_d0 = 0x2b2d6d82aa402c0a;
    local_c8 = 0xc064ed9510bc010b;
    uStack_c0 = 0xfec09918395f26c4;
    local_148._8_8_ = 0x706165775f647261;
    local_148._0_8_ = 0x6f6265726f63735b;
    auStack_138._8_8_ = 0x646120616d61726f;
    auStack_138._0_8_ = 0x6e6170205d736e6f;
    local_128 = 0x6f6e207373657264;
    uStack_120 = 0xa79646165722074;
    uStack_118 = 0;
    uStack_110 = 0;
    puStack_a0 = (undefined1 *)0xffffffffffffffff;
    do {
      puStack_a0 = puStack_a0 + 1;
    } while (local_148[(longlong)puStack_a0] != '\0');
LAB_1802be609:
    uStack_110 = 0;
    uStack_118 = 0;
    uStack_120 = 0xa79646165722074;
    uStack_c0 = 0xfec09918395f26c4;
    local_c8 = 0xc064ed9510bc010b;
    local_a8 = local_148;
    ppcVar9 = &local_a8;
  }
  else {
    lVar4 = FUN_18017ea70();
    *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + 1;
    plVar5 = (longlong *)FUN_1802c14d0(&local_48,lVar11);
    if ((char)plVar5[1] == '\0') {
      lVar11 = 0;
    }
    else {
      lVar11 = *plVar5;
    }
    lVar4 = FUN_18017ea70();
    if (*(int *)(lVar4 + 4) != 0) {
      *(int *)(lVar4 + 4) = *(int *)(lVar4 + 4) + -1;
    }
    if (lVar11 == 0) {
      uStack_e8 = 0x929654b1461b7377;
      uStack_e0 = 0xa5cea54bfef7110;
      local_d8 = 0xa70c9f7f916b7e19;
      uStack_d0 = 0x2b2d6d82aa402c0a;
      local_c8 = 0xc064ed9510bc010b;
      uStack_c0 = 0xfec09918395f26c4;
      auStack_138._8_8_ = 0x69676e655f69755f;
      auStack_138._0_8_ = 0x746567205d736e6f;
      local_128 = 0x727574657220656e;
      uStack_120 = 0x6c6c756e2064656e;
      uStack_118 = 10;
      uStack_110 = 0;
      lVar11 = -1;
      do {
        uStack_b0 = lVar11 + 1;
        lVar4 = lVar11 + 1;
        lVar11 = uStack_b0;
      } while (local_148[lVar4] != '\0');
    }
    else {
      lVar4 = FUN_1802bdcb0();
      if (lVar4 == 0) {
        local_f8._8_8_ = 0xa05181ee77d57a06;
        local_f8._0_8_ = 0xdb35e39b27e1c185;
        uStack_e8 = 0x929654b1461b7377;
        uStack_e0 = 0xa5cea54bfef7110;
        local_d8 = 0xa70c9f7f916b7e19;
        uStack_d0 = 0x2b2d6d82aa402c0a;
        local_c8 = 0xc064ed9510bc010b;
        uStack_c0 = 0xfec09918395f26c4;
        local_148._8_8_ = 0x706165775f647261;
        local_148._0_8_ = 0x6f6265726f63735b;
        auStack_138._8_8_ = 0x2074706972637320;
        auStack_138._0_8_ = 0x445548205d736e6f;
        local_128 = 0x6f6e206c656e6170;
        uStack_120 = 0xa79646165722074;
        uStack_118 = 0;
        uStack_110 = 0;
        puStack_a0 = (undefined1 *)0xffffffffffffffff;
        do {
          puStack_a0 = puStack_a0 + 1;
        } while (local_148[(longlong)puStack_a0] != '\0');
        goto LAB_1802be609;
      }
      local_148._8_8_ = 0xa05181ee77d57a06;
      local_148._0_8_ = 0xdb35e39b27e1c185;
      auStack_138._8_8_ = 0xa5cea54bfef7110;
      auStack_138._0_8_ = 0x929654b1461b7377;
      local_128 = 0xa70c9f7f916b7e19;
      uStack_120 = 0x2b2d6d82aa402c0a;
      uStack_118 = 0xc064ed9510bc010b;
      uStack_110 = 0xfec09918395f26c4;
      local_108 = 0x835e2313e2c48f8d;
      uStack_100 = 0xf863c3261a551f0e;
      builtin_strncpy(local_98,
                      "[scoreboard_weapons] injecting HUD setup script (engine={:p} panel={:p})\n",
                      0x4a);
      local_98[0x4a] = '\0';
      local_98[0x4b] = '\0';
      local_98[0x4c] = '\0';
      local_98[0x4d] = '\0';
      local_98[0x4e] = '\0';
      local_98[0x4f] = '\0';
      uVar8 = 0xffffffffffffffff;
      do {
        uStack_b0 = uVar8 + 1;
        lVar13 = uVar8 + 1;
        uVar8 = uStack_b0;
      } while (local_98[lVar13] != '\0');
      local_b8 = local_98;
      auStack_138._8_8_ = lVar4;
      auStack_138._0_8_ = lVar11;
      local_148._8_8_ = 0xa000000000000008;
      local_148._0_8_ = 0xa000000000000000;
      local_a8 = (char *)0x2;
      puStack_a0 = local_148;
      uStack_e8 = 0;
      uStack_e0 = 0xf;
      local_f8._1_15_ = SUB1615((undefined1  [16])0x0,1);
      auVar2[0xf] = 0;
      auVar2._0_15_ = local_f8._1_15_;
      local_f8 = auVar2 << 8;
      uVar8 = 0;
      uVar12 = 0;
      do {
        bVar10 = (byte)(*(ulonglong *)(local_148 + uVar12 * 8) >> 0x3c);
        if (bVar10 == 0xc) {
          uVar8 = uVar8 + *(longlong *)
                           (auStack_138 +
                           (*(ulonglong *)(local_148 + uVar12 * 8) & 0xfffffffffffffff) + 8);
        }
        else if (bVar10 == 0xb) {
          uVar8 = uVar8 + 0x20;
        }
        else {
          uVar8 = uVar8 + 8;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < 2);
      lVar13 = uStack_b0 + uVar8;
      if (CARRY8(uStack_b0,uVar8)) {
        lVar13 = -1;
      }
      DAT_180b8fb80 = lVar11;
      DAT_180b8fb88 = lVar4;
      FUN_1800f5540(local_f8,lVar13);
      local_48 = local_a8;
      puStack_40 = puStack_a0;
      FUN_1801da050(&local_a8,local_f8,&local_b8,&local_48,0);
      puVar7 = local_f8;
      if ((uStack_e0 < 0x10) ||
         (puVar7 = (undefined1 *)local_f8._0_8_, (undefined1 *)local_f8._0_8_ != (undefined1 *)0x0))
      {
        puVar6 = (undefined1 *)FUN_1803b0a60();
        uVar1 = *puVar6;
        puVar6 = (undefined1 *)FUN_1803b0a60();
        *puVar6 = 1;
        FUN_1800a9e50(1,puVar7);
        puVar7 = (undefined1 *)FUN_1803b0a60();
        *puVar7 = uVar1;
      }
      FUN_18015c010(local_f8);
      local_148 = (undefined1  [16])0x0;
      auStack_138 = (undefined1  [16])0x0;
      uVar14 = FUN_18015ba30(local_148,
                             "\n(function () {\n\n\tif (typeof SClient !== \"undefined\") {\n\t\tSClient = undefined;\n\t}\n\n\tSClient = (function () {\n\t\tvar handlers = {};\n\t\treturn {\n\t\t\tregister_handler: function (type, callback) { handlers[type] = callback; },\n\t\t\treceive: function (msg) {\n\t\t\t\tif (msg && handlers[msg.type]) handlers[msg.type](msg);\n\t\t\t}\n\t\t};\n\t})();\n\n\tSWeaponManager = (function () {\n\n\t\tfunction isValid(panel) {\n\t\t\treturn panel && panel.IsValid();\n\t\t}\n\n\t\tfunction getScoreboard() {\n\t\t\tvar root = $.GetContextPanel();\n\t\t\tif (!isValid(root)) return null;\n\t\t\tvar scoreboard = root.id === \"Scoreboard\" ? root : root.FindChildTraverse(\"Scoreboard\");\n\t\t\treturn isValid(scoreboard) ? scoreboard : null;\n\t\t}\n\n\t\tfunction getRow(sb, xuid, account_id) {\n\t\t\tvar keys = [xuid, account_id];\n\t\t\tvar prefixes = [\"player-\", \"id-\", \"id-player-\", \"player_\"];\n\t\t\tfor (var i = 0; i < keys.length; ++i) {\n\t\t\t\tif (!keys[i]) continue;\n\t\t\t\tfor (var j = 0; j < prefixes.length; ++j) {\n\t\t\t\t\tvar row = sb.FindChildTraverse(prefixes[j] + keys[i]);\n\t\t\t\t\tif (isValid(row)) return row;\n\t\t\t\t}\n\t\t\t}\n\t\t\treturn null;\n\t\t}\n\n\t\tfunction getSize(w) {\n\t\t\tvar t = w.type, p = w.path;\n\t\t\tif (t === 1) {\n\t\t\t\tif (p.indexOf(\"usp_silencer\") !== -1) return \"42px\";\n\t\t\t\tif (p.indexOf(\"deagle\")       !== -1) return \"36px\";\n\t\t\t\tif (p.indexOf(\"revolver\")     !== -1) return \"32px\";\n\t\t\t\tif (p.indexOf(\"tec9\")         !== -1) return \"36px\";\n\t\t\t\tif (p.indexOf(\"elite\")        !== -1) return \"32px\";\n\t\t\t\treturn \"30px\";\n\t\t\t}\n\t\t\tif (t === 2 || t === 3 || t === 4 || t === 5 || t === 6)\n\t\t\t\treturn p.indexOf(\"mac10\") !== -1 ? \"30px\" : \"52px\";\n\t\t\tif (t === 9) {\n\t\t\t\tif (p.indexOf(\"incgrenade\")   !== -1 || p.indexOf(\"smokegrenade\") !== -1) return \"14px\";\n\t\t\t\tif (p.indexOf(\"molotov\")      !== -1 || p.indexOf(\"flashbang\")    !== -1) return \"16px\";\n\t\t\t\treturn \"14px\";\n\t\t\t}\n\t\t\tif (t === 7)  return \"16px\";\n\t\t\tif (t === 8)  return \"22px\";\n\t\t\tif (t === 11) return p.indexOf(\"healthshot\") !== -1 ? \"18px\" : \"14px\";\n\t\t\tif (t === 0)  return \"46px\";\n\t\t\treturn \"16px\";\n\t\t}\n\n\t\tfunction updateWeaponIcon(parent, w, active_path, style) {\n\t\t\tva..." /* TRUNCATED STRING LITERAL */
                             ,0x1858);
      cVar3 = FUN_1802bef30(uVar14,local_148);
      FUN_18015c010(local_148);
      if (cVar3 == '\0') {
        return;
      }
      DAT_180b8fb30 = '\x01';
      uStack_e8 = 0x929654b1461b7377;
      uStack_e0 = 0xa5cea54bfef7110;
      local_d8 = 0xa70c9f7f916b7e19;
      uStack_d0 = 0x2b2d6d82aa402c0a;
      auStack_138._8_8_ = 0x7069726373207075;
      auStack_138._0_8_ = 0x746573205d736e6f;
      local_128 = 0x7463656a6e692074;
      uStack_120 = 0xa6465;
      lVar11 = -1;
      do {
        uStack_b0 = lVar11 + 1;
        lVar4 = lVar11 + 1;
        lVar11 = uStack_b0;
      } while (local_148[lVar4] != '\0');
    }
    local_b8 = local_148;
    ppcVar9 = &local_b8;
  }
  local_148._8_8_ = 0x706165775f647261;
  local_148._0_8_ = 0x6f6265726f63735b;
  uStack_d0 = 0x2b2d6d82aa402c0a;
  local_d8 = 0xa70c9f7f916b7e19;
  uStack_e0 = 0xa5cea54bfef7110;
  uStack_e8 = 0x929654b1461b7377;
  local_f8._8_8_ = 0xa05181ee77d57a06;
  local_f8._0_8_ = 0xdb35e39b27e1c185;
  FUN_18020e620(ppcVar9);
  return;
}



